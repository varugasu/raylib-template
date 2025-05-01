#include "raylib.h"
#include "imgui.h"
#include "rlImGui.h"

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void) {
  // Initialization
  //--------------------------------------------------------------------------------------
  const int screenWidth = 800;
  const int screenHeight = 450;

  InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

  SetTargetFPS(60);  // Set our game to run at 60 frames-per-second
  //--------------------------------------------------------------------------------------

  rlImGuiSetup(true);
  // Main game loop
  while (!WindowShouldClose())  // Detect window close button or ESC key
  {
    // Update
    //----------------------------------------------------------------------------------
    // TODO: Update your variables here
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();
    rlImGuiBegin();

    bool open = true;
    ImGui::ShowDemoWindow(&open);

    ClearBackground(RAYWHITE);

    DrawText("Congrats! You created your first window!", 190, 200, 20,
             LIGHTGRAY);

    rlImGuiEnd();
    EndDrawing();
    //----------------------------------------------------------------------------------
  }

  // De-Initialization
  //--------------------------------------------------------------------------------------
  rlImGuiShutdown();
  CloseWindow();  // Close window and OpenGL context
  //--------------------------------------------------------------------------------------

  return 0;
}
