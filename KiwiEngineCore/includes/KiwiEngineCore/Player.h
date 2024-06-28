#ifndef PLAYER_H
#define PLAYER_H

#include <raylib.h>

class Player
{
public:
	Player(Vector2 position, Texture2D sprite);
	~Player();

	void Update(float deltaTime);
	void Draw();

	void SetPosition(Vector2 position);
	Vector2 GetPosition() const;

private:
	Vector2 position;
	Texture2D sprite;
	Rectangle frameRec; // Прямоугольник текущего кадра анимации
	int currentFrame;
	int maxFrames;      // Количество кадров в анимации
	float updateTime;   // Время обновления анимации
	float runningTime;  // Время с последнего обновления анимации
};

#endif // !PLAYER_H
