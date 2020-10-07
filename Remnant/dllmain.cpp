// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "Keybinds.h"

// These static variables we'll use to hold things that will reference alot like PlayerController
static UFT::UWorld* World = nullptr;
static UFT::ARemnant_PlayerController_C* MyPlayerController = nullptr;
static UFT::ATPSHud_C* MyHUD = nullptr;
static UFT::UCanvas* MyCanvas = nullptr;
static UFT::UFont* MyFont = nullptr;
static bool bDrawPlayerESP = true;
static bool bDrawItemESP = true;

std::vector<float> Yp{};

// Typedef to make hooking ProcessEvent and PostRender easier
typedef void(*tProcessEvent)(UFT::UObject*, UFT::UFunction*, void*);
tProcessEvent Real_ProcessEvent = nullptr;

typedef void(*tPostRender)(UFT::UGameViewportClient*, UFT::UCanvas*);
tPostRender Real_PostRender = nullptr;


UFT::FString* FTextToString(UFT::FText* text) {
    typedef UFT::FString* (*tToString)(UFT::FText*);
    tToString rToString = reinterpret_cast<tToString>(reinterpret_cast<const unsigned char*>(GetModuleHandleW(nullptr)) + 0x969030);
    return rToString(text);
}

UFT::ACharacter_Master_Player_C* GetMyPlayer()
{
    if(MyPlayerController && MyPlayerController->K2_GetPawn() && MyPlayerController->K2_GetPawn()->IsA(UFT::ACharacter_Master_Player_C::StaticClass()))
        return (UFT::ACharacter_Master_Player_C*)MyPlayerController->K2_GetPawn();
    return nullptr;
}

// Too many things return the same location in this game, so we have to avoid stacking
UFT::FVector2D FixScreenPos(UFT::FVector2D *ScreenPos)
{
    auto X = ScreenPos->X;
    auto Y = ScreenPos->Y;
    while (std::find(Yp.begin(), Yp.end(), Y) != Yp.end())
        Y += 12;
    Yp.push_back(Y);
    *ScreenPos = UFT::FVector2D(X, Y);
    return UFT::FVector2D(X, Y);
}

void DrawItemESP(UFT::UCanvas* Canvas)
{
    if (MyPlayerController)
    {
        // Loop through and display all of "AItem" class
        UFT::TArray<UFT::AActor*> OutActors{};
        GetGameplayStatics().STATIC_GetAllActorsOfClass(MyPlayerController, UFT::AItem::StaticClass(), &OutActors);
        for (auto i = 0; i < OutActors.Num(); i++)
        {
            auto TheItem = (UFT::AItem*)OutActors[i];
            auto ActorWorldLocation = OutActors[i]->K2_GetActorLocation();
            UFT::FVector2D ScreenPos{};
            if (MyPlayerController->ProjectWorldLocationToScreen(ActorWorldLocation, &ScreenPos, false)) 
            {
                auto DisplayName = FTextToString(&TheItem->Label);
                Canvas->K2_DrawText(
                    MyFont, *DisplayName, FixScreenPos(&ScreenPos), UFT::FVector2D(1, 1),
                    UFT::FLinearColor(1, 1, 1, 1), 0, UFT::FLinearColor(0, 0, 0, 1), UFT::FVector2D(0, 0), false, false, true,
                    UFT::FLinearColor(0, 0, 0, 1)
                );

                // If the item has no owner, then it's a single item on the ground and we can print the distance
                // Otherwise, we don't want to print distance because the distance will print under the character
                if (!TheItem->GetOwner())
                {
                    std::wstring Distance = std::to_wstring((int)(MyPlayerController->GetDistanceTo(TheItem) / 100)) + L"m";
                    Canvas->K2_DrawText(
                        MyFont, UFT::FString{ Distance.c_str() }, FixScreenPos(&ScreenPos), UFT::FVector2D(1, 1),
                        UFT::FLinearColor(1, 1, 1, 1), 0, UFT::FLinearColor(0, 0, 0, 1), UFT::FVector2D(0, 0), false, false, true,
                        UFT::FLinearColor(0, 0, 0, 1)
                    );
                }
            }
        }
    }
}

void DrawPlayerESP(UFT::UCanvas* Canvas)
{
    if (MyPlayerController)
    {
        // Loop through and display all of "AItem" class
        UFT::TArray<UFT::AActor*> OutActors{};
        GetGameplayStatics().STATIC_GetAllActorsOfClass(MyPlayerController, UFT::ACharacterGunfire::StaticClass(), &OutActors);
        for (auto i = 0; i < OutActors.Num(); i++)
        {
            auto Player = (UFT::ACharacterGunfire*)OutActors[i];
           
            // Don't want to print locally controlled player
            auto ActorWorldLocation = OutActors[i]->K2_GetActorLocation();
            UFT::FVector2D ScreenPos{};
            if (MyPlayerController->ProjectWorldLocationToScreen(ActorWorldLocation, &ScreenPos, false)) 
            {

                auto DisplayName = GetKismetSystemLibrary().STATIC_GetDisplayName(OutActors[i]);
                Canvas->K2_DrawText(
                    MyFont, DisplayName, FixScreenPos(&ScreenPos), UFT::FVector2D(1, 1),
                    UFT::FLinearColor(1, 1, 0, 1), 0, UFT::FLinearColor(0, 0, 0, 1), UFT::FVector2D(0, 0), false, false, true,
                    UFT::FLinearColor(0, 0, 0, 1)
                );

                // Print the distance in meters under the character
                std::wstring Distance = std::to_wstring((int)(MyPlayerController->GetDistanceTo(Player) / 100)) + L"m";
                Canvas->K2_DrawText(
                    MyFont, UFT::FString{ Distance.c_str() }, FixScreenPos(&ScreenPos), UFT::FVector2D(1, 1),
                    UFT::FLinearColor(1, 1, 1, 1), 0, UFT::FLinearColor(0, 0, 0, 1), UFT::FVector2D(0, 0), false, false, true,
                    UFT::FLinearColor(0, 0, 0, 1)
                );
            }
        }
    }
}

void Hooked_PostRender(UFT::UGameViewportClient* this__, UFT::UCanvas* Canvas)
{
    auto i = 0;
    // Draw two static things on top so we know we're injected
    Canvas->K2_DrawText(MyFont, GetKismetSystemLibrary().STATIC_GetEngineVersion(), UFT::FVector2D(10, (i++ * 12) + 10), UFT::FVector2D(1, 1),
        UFT::FLinearColor(1, 1, 1, 1), 0, UFT::FLinearColor(0, 0, 0, 1), UFT::FVector2D(0, 0), false, false, true, 
        UFT::FLinearColor(0, 0, 0, 1));
    Canvas->K2_DrawText(MyFont, GetKismetSystemLibrary().STATIC_GetGameName(), UFT::FVector2D(10, (i++ * 12) + 10), UFT::FVector2D(1, 1),
        UFT::FLinearColor(1, 1, 1, 1), 0, UFT::FLinearColor(0, 0, 0, 1), UFT::FVector2D(0, 0), false, false, true, 
        UFT::FLinearColor(0, 0, 0, 1));

    // Only loop through world actors if player controller exists because we need to reference it for WorldContext, we'll crash otherwise
    if (MyPlayerController) 
    {
        //Print playercontroller name if exists
        Canvas->K2_DrawText(
            MyFont, GetKismetSystemLibrary().STATIC_GetDisplayName(MyPlayerController), UFT::FVector2D(10, (i++ * 12) + 10), UFT::FVector2D(1, 1),
            UFT::FLinearColor(1, 1, 1, 1), 0, UFT::FLinearColor(0, 0, 0, 1), UFT::FVector2D(0, 0), false, false, true, 
            UFT::FLinearColor(0, 0, 0, 1));
        
        if (MyPlayerController->K2_GetPawn())
        {
            //Print player character name if exists
            Canvas->K2_DrawText(MyFont, GetKismetSystemLibrary().STATIC_GetDisplayName(MyPlayerController->K2_GetPawn()), UFT::FVector2D(10, (i++ * 12) + 10), UFT::FVector2D(1, 1),
                UFT::FLinearColor(1, 1, 1, 1), 0, UFT::FLinearColor(0, 0, 0, 1), UFT::FVector2D(0, 0), false, false, true, 
                UFT::FLinearColor(0, 0, 0, 1));
            auto MyPlayer = (UFT::ACharacter_Master_Player_C*)MyPlayerController->K2_GetPawn();
           
            //Print number of inventory items
            if (MyPlayer->GetCharacterInventory()) {
                std::wstring inv_items = L"Inventory Items: " + std::to_wstring(MyPlayer->GetCharacterInventory()->Items.Num());
                Canvas->K2_DrawText(
                    MyFont, UFT::FString{ inv_items.c_str() }, UFT::FVector2D(10, (i++ * 12) + 10), UFT::FVector2D(1, 1),
                    UFT::FLinearColor(1, 1, 1, 1), 0, UFT::FLinearColor(0, 0, 0, 1), UFT::FVector2D(5, 5), false, false, true, 
                    UFT::FLinearColor(0, 0, 0, 1));
            }
       }

        if (GetMyPlayer()) {
            GetMyPlayer()->ResetHealth(false);
        }

        Yp.clear(); // Clear cached Y positions
        DrawItemESP(Canvas);
        DrawPlayerESP(Canvas);
        Keybinds::Tick();
    }
    return Real_PostRender(this__, Canvas);
}


void Hooked_ProcessEvent(UFT::UObject* this__, UFT::UFunction* fn, void* params)
{
    /*
     * Function PlayStateEffect_WorldReset.PlayStateEffect_WorldReset_C.Apply
     *
     * We will use this Function call to set or unset our PlayerController that we'll use the rest of the game.
     * Before doing anything, I'll check if MyPlayerController is valid, which will tell me whether or not we are in game or not.
     * If it's valid - we're in game, otherwise, we're not.
     */
    if (std::strcmp(fn->GetFullName().c_str(), "Function PlayStateEffect_WorldReset.PlayStateEffect_WorldReset_C.Apply") == 0) 
    {
        // Cast the params to the correct struct, matching the function call
        auto args = (UFT::UPlayStateEffect_WorldReset_C_Apply_Params*)params;

        // I noticed within this struct theres something called PlayState component, we'll get the state of the player controller from this
        auto PlaystateComponent = args->Component;

        // Check if the PlayState is "Playing", if it is, then we'll assign the playercontroller
        if (std::strcmp(PlaystateComponent->CurrentState->StateName.GetName().c_str(), "Playing") == 0) 
        {
            MyPlayerController = (UFT::ARemnant_PlayerController_C*)PlaystateComponent->GetOwningPlayerController();
            // Now that the playercontroller is set, we can use it to basically reference the corrent world and find everything else

            std::cout << PlaystateComponent->GetOwningPlayerController()->GetFullName() << std::endl;
            std::cout << "MyPlayerController: 0x" << MyPlayerController << std::endl;
            std::cout << "PlayState: " << args->Component->CurrentState->StateName.GetName() << std::endl << std::endl;
        }
        // Else we're going to clear the PlayerController, because I don't want to make calls on it if it's not in a valid "Playing" state
        else
        {
            MyPlayerController = nullptr;
            std::cout << PlaystateComponent->GetOwningPlayerController()->GetFullName() << std::endl;
            std::cout << "PlayState: " << args->Component->CurrentState->StateName.GetName() << std::endl << std::endl;
        }
    }

    // Pass the parameters from the hooked ProcessEvent to the real one (which we define down below after UFT::InitSDK)
    return Real_ProcessEvent(this__, fn, params);
}

void SetupKeybinds()
{
    // F1 - Print and save the actor list
    Keybinds::Set(VK_F1, false, [] {
        if (MyPlayerController) {
            std::ofstream file{ "C:/temp/actorlist.txt", std::ios_base::app };
            UFT::TArray<UFT::AActor*> OutActors{};
            GetGameplayStatics().STATIC_GetAllActorsOfClass(MyPlayerController, UFT::AActor::StaticClass(), &OutActors);
            for (auto i = 0; i < OutActors.Num(); i++) {
                std::cout << OutActors[i]->GetName() << std::endl;
                file << OutActors[i]->GetFullName() << std::endl;
            }
            file.close();
        }
        });

    // F2 - Force "takeall" of all items on the map
    Keybinds::Set(VK_F2, false, [] {
        if (MyPlayerController) {
            UFT::TArray<UFT::AActor*> OutActors{};
            GetGameplayStatics().STATIC_GetAllActorsOfClass(MyPlayerController, UFT::AItem::StaticClass(), &OutActors);
            for (auto i = 0; i < OutActors.Num(); i++) {
                auto TheItem = (UFT::AItem*)OutActors[i];
                if (/*TheItem->IsA(UFT::AUseableItem::StaticClass()) &&*/ GetMyPlayer()) {
                    if (!TheItem->GetOwner() || TheItem->GetOwner() != GetMyPlayer()) {
                        GetMyPlayer()->Inventory->ServerPickupItem(TheItem);
                        std::cout << "Trying to pick up " << TheItem->GetName() << "\n";
                    }
                }
            }
        }
        });
}

BOOL WINAPI MainThread()
{
    // Allocate the console, so anything we print to it we can see.. I use this mainly to debug stuff
    AllocConsole();
    FILE* file = nullptr;
    freopen_s(&file, "CONOUT$", "w", stdout);
    ShowWindow(GetConsoleWindow(), SW_SHOW);

    // We want to wait for the actual UnrealWindow to open, otherwise shit will start failing if we try to set GObjects and GNames..
    HWND hWnd = 0;
    while (!hWnd) {
        hWnd = FindWindowW(L"UnrealWindow", NULL);
    }

    // This sets GObject, GNames
    UFT::InitSdk();

    while (!MyFont) {
        MyFont = UFT::UObject::FindObject<UFT::UFont>("Font Roboto.Roboto");
        //MyFont = UFT::UObject::FindObject<UFT::UFont>("Font F_Console_Font.F_Console_Font");
    }

    // We will hook ProcessEvent because everything mostly everything we need gets filtered through ProcessEvent, so by hooking it we can find pointers to all the actors, players, inventories, etc..
    Real_ProcessEvent = reinterpret_cast<tProcessEvent>(reinterpret_cast<void**>(UFT::UObject::StaticClass()->VfTable)[64]);
    //Real_PostRender = reinterpret_cast<tPostRender>(reinterpret_cast<void**>(UFT::UGameViewportClient::StaticClass()->CreateDefaultObject()->VfTable)[91]); 
    Real_PostRender = reinterpret_cast<tPostRender>(reinterpret_cast<void**>(UFT::UGameViewportClient::StaticClass()->CreateDefaultObject()->VfTable)[92]);

    printf("Base: 0x%p\n", GetModuleHandleW(nullptr));
    printf("UObjects: 0x%p\n", UFT::UObject::GObjects);
    printf("GNames: 0x%p\n", UFT::FName::GNames);
    printf("ProcessEvent: 0x%p\n", Real_ProcessEvent);
    printf("PostRender: 0x%p\n", Real_PostRender);
    printf("MyFont: 0x%p\n\n", MyFont);

    SetupKeybinds();

    // Use detours, hook ProcessEvent and PostRender 
    if (DetourTransactionBegin() != NO_ERROR ||
        DetourUpdateThread(GetCurrentThread()) != NO_ERROR ||
        DetourAttach(&(LPVOID&)Real_ProcessEvent, (PVOID)Hooked_ProcessEvent) != NO_ERROR ||
        DetourAttach(&(LPVOID&)Real_PostRender, (PVOID)Hooked_PostRender) != NO_ERROR ||
        DetourTransactionCommit() != NO_ERROR) 
    {
        return FALSE;
    }

    return TRUE;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH)
    {
        if (!CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)&MainThread, NULL, NULL, NULL))
            return FALSE;
    }
    else if (ul_reason_for_call == DLL_PROCESS_DETACH)
    {

    }

    return TRUE;
}

