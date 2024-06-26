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

	// Rectangle
	int rectangle_x = 200;
	int rectangle_y = 100;
	int rectangle_width = 100;
	int rectangle_height = 100;

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

		DrawRectangle(rectangle_x, rectangle_y, rectangle_width, rectangle_height, RED);

		if (IsKeyDown(KEY_RIGHT) && rectangle_x < 700) { rectangle_x = rectangle_x + 5; }

		if (IsKeyDown(KEY_LEFT) && rectangle_x > 0) { rectangle_x = rectangle_x - 5; }

		if (IsKeyDown(KEY_UP) && rectangle_y > 0) { rectangle_y = rectangle_y - 5; }

		if (IsKeyDown(KEY_DOWN) && rectangle_y < 500) { rectangle_y = rectangle_y + 5; }

		// Game login ends
		EndDrawing();
	}

	return 0;
}