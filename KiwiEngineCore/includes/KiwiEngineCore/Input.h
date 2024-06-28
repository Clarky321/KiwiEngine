#ifndef INPUT_H
#define INPUT_H

#include <KiwiEngineCore\Player.h>

class Input
{
public:
	void HandleInput(Player& player);

private:
	void MovePlayer(Player& player, Vector2 direction);
};

#endif // !INPUT_H
