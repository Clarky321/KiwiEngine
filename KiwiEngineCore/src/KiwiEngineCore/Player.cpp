#include <KiwiEngineCore\Player.h>

Player::Player(Vector2 pos, Texture2D spr) : position(pos), sprite(spr), currentFrame(0), maxFrames(4), updateTime(0.1f), runningTime(0.0f)
{
    frameRec = { 0.0f, 0.0f, (float)sprite.width / maxFrames, (float)sprite.height };
}

Player::~Player()
{
    UnloadTexture(sprite); // Убедитесь, что текстуры выгружаются, чтобы не было утечек памяти
}

void Player::Update(float deltaTime)
{
    runningTime += deltaTime;
    if (runningTime >= updateTime)
    {
        runningTime = 0.0f;
        currentFrame++;
        if (currentFrame > maxFrames) currentFrame = 0;
        frameRec.x = currentFrame * frameRec.width;
    }
}

void Player::Draw()
{
    DrawTextureRec(sprite, frameRec, position, WHITE);
}

void Player::SetPosition(Vector2 pos)
{
    position = pos;
}

Vector2 Player::GetPosition() const
{
    return position;
}