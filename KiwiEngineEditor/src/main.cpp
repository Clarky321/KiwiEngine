#include <raylib.h>

//#define RAYGUI_IMPLEMENTATION
//#include <raygui.h>

#include <KiwiEngineCore\Player.h>
#include <KiwiEngineCore\Input.h>

// window
const int WIDTH = 1200;
const int HEIGHT = 800;

int main()
{
	InitWindow(WIDTH, HEIGHT, "KiwiEngine");
	SetTargetFPS(60);

	Texture2D playerSprite = LoadTexture("../../assets/player.png");
	Player player({ 500, 100 }, playerSprite);
	Input inputHandler;

	while (!WindowShouldClose())
	{
		float deltaTime = GetFrameTime();

		inputHandler.HandleInput(player);
		player.Update(deltaTime);

		BeginDrawing();
		ClearBackground(RAYWHITE);

		player.Draw();

		EndDrawing();
	}
	
	CloseWindow();
	return 0;
}