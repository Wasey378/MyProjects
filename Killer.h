#pragma once

#include "Graphics.h"

#include "Entity.h"

class Killer : public Entity
{
public:
	Killer(Vector2D position, Vector2D velocity, Color c);
	void seekPlayer(const Entity& player);

	bool playerIsInRange(const Entity& player) const;

private:
	const float range = 100.0f; //pixels
	const float movementSpeed = 10.0f;
};