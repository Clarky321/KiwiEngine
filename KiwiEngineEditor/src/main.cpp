#include <raylib.h>

int main()
{
	// Window
	int width = 800;
	int height = 600;

	InitWindow(width, height, "Window");

	// Cirlce
	int circle_x = 400;
	int circle_y = 300;
	int radius = 50;

	SetTargetFPS(60);

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);

		// Game login begins

		DrawCircle(circle_x, circle_y, radius, SKYBLUE);

		if (IsKeyDown(KEY_D) && circle_x < 800) { circle_x = circle_x + 5; }

		if (IsKeyDown(KEY_A) && circle_x > 0) { circle_x = circle_x - 5; }

		if (IsKeyDown(KEY_W) && circle_y > 0) { circle_y = circle_y - 5; }

		if (IsKeyDown(KEY_S) && circle_y < 600) { circle_y = circle_y + 5; }

		// Game login ends
		EndDrawing();
	}

	return 0;
}