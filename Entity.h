#pragma once
#include "Graphics.h"
#include "Vector2D.h"

class Entity {
public:
	Entity(Vector2D position, Vector2D velocity, Color c)
		:
		position(position),
		velocity(velocity),
		c(c)
	{}
	float getx() const {
		return position.x;
	}
	float gety() const {
		return position.y;
	}
	Vector2D getPosition() const {
		return position;
	}
	//Rect getRect();
	void move() {
		position += velocity;
	}
	bool detectCollision(const Entity& other) {
		return position == other.position;
	}

	virtual void draw(Graphics& gfx) const
	{
		gfx.PutPixel(int(position.x), int(position.y), c);
	}

protected:
	Vector2D position;
	Vector2D velocity;

	float width = 1;
	float height = 1;
	//class Rect rect;

	Color c;
};

