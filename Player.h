#pragma once
#include "Keyboard.h"
#include "Graphics.h"
#include "Entity.h"
class Player : public Entity
{
	friend class Killer;
public:
	Player(Vector2D position, Vector2D velocity, Color c);
	void move(const Keyboard& kbd);

	void damageTaken(float damage) {
		hp -= damage;
	}

	//void draw(Graphics& gfx);
private:
	float hp = 100;
	const float movementSpeed = 10.0f; //pixel
};

