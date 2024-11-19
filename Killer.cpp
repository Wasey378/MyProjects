#include "Killer.h"
#include <math.h>

Killer::Killer(Vector2D position, Vector2D velocity, Color c)
	:
	Entity(position, velocity, c)
{
}

void Killer::seekPlayer(const Entity& player)
{
	Vector2D playerPosition = player.getPosition();
	Vector2D vectorToMove = playerPosition + (position * -1);

	if (vectorToMove.x == 0 || vectorToMove.y == 0) {
		if (!playerIsInRange(player)) {
			velocity = vectorToMove.getUnitVector() * movementSpeed;
		}
	}
	else {
		Vector2D temp = { 0,0 };
		if (abs(vectorToMove.x) < abs(vectorToMove.y)) {
			temp.x = vectorToMove.x;
			velocity = temp.getUnitVector() * movementSpeed;
		}
		else {
			temp.y = vectorToMove.y;
			velocity = temp.getUnitVector() * movementSpeed;
		}
	}

	Entity::move();

}

bool Killer::playerIsInRange(const Entity& player) const
{
	Vector2D playerPosition = player.getPosition();
	Vector2D vectorToMove = playerPosition + (position * -1);
	
	return vectorToMove.getLength() <= range;
}

// distance <= range
// distance^2 <= range^2