#include "Player.h"

Player::Player(Vector2D position, Vector2D velocity, Color c)
	:
	Entity(position, velocity, c)
{
}

void Player::move(const Keyboard& kbd)
{
	velocity = Vector2D(0, 0);
	if (kbd.KeyIsPressed('D')) {
		velocity.x = movementSpeed;
	}
	else if (kbd.KeyIsPressed('A')) {
		velocity.x = -movementSpeed;
	}

	if (kbd.KeyIsPressed('S')) {
		velocity.y = movementSpeed;
	}
	else if (kbd.KeyIsPressed('W')) {
		velocity.y = -movementSpeed;
	}
	Entity::move();
}
