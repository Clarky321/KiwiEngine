#include <KiwiEngineCore\Input.h>

void Input::HandleInput(Player& player)
{
    if (IsKeyDown(KEY_W)) MovePlayer(player, { 0, -1 });
    if (IsKeyDown(KEY_S)) MovePlayer(player, { 0, 1 });
    if (IsKeyDown(KEY_A)) MovePlayer(player, { -1, 0 });
    if (IsKeyDown(KEY_D)) MovePlayer(player, { 1, 0 });
}

void Input::MovePlayer(Player& player, Vector2 direction)
{
    Vector2 newPos = player.GetPosition();
    newPos.x += direction.x * 5.0f; // Скорость перемещения
    newPos.y += direction.y * 5.0f;
    player.SetPosition(newPos);
}