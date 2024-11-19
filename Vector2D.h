#pragma once
class Vector2D
{
public:
	Vector2D() = default;
	Vector2D(float x, float y);

	Vector2D operator+(const Vector2D rhs) const;
	Vector2D& operator+=(const Vector2D rhs);
	Vector2D operator-(const Vector2D rhs) const;
	Vector2D& operator-=(const Vector2D rhs);
	Vector2D operator*(float rhs) const;
	Vector2D& operator*=(float rhs);
	bool operator==(const Vector2D rhs) const;

	float getLength() const; //get magnitude
	float getLengthSq() const; //get magnitude squared, in case speed is needed

	Vector2D& converToUnitVect();
	Vector2D getUnitVector() const;

	float x = 0.0f; //initialize, may be changed by parameterized constructor
	float y = 0.0f;
};

