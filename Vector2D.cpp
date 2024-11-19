#include "Vector2D.h"
#include <math.h>

Vector2D::Vector2D(float x, float y)
    :
    x(x),
    y(y)
{
}

Vector2D Vector2D::operator+(const Vector2D rhs) const
{
    return Vector2D(x + rhs.x, y + rhs.y);
}

Vector2D& Vector2D::operator+=(const Vector2D rhs)
{
    return *this = *this + rhs;
}

Vector2D Vector2D::operator-(const Vector2D rhs) const
{
    return Vector2D(x - rhs.x, y - rhs.y);
}

Vector2D& Vector2D::operator-=(const Vector2D rhs)
{
    return *this = *this - rhs;
}

Vector2D Vector2D::operator*(float rhs) const
{
    return Vector2D(x * rhs, y * rhs);
}

Vector2D& Vector2D::operator*=(float rhs)
{
    return *this = *this * rhs;
}

bool Vector2D::operator==(const Vector2D rhs) const
{
    return x == rhs.x && y == rhs.y;
}

float Vector2D::getLength() const
{
    return  float(sqrt(getLengthSq()));
}

float Vector2D::getLengthSq() const
{
    return x * x + y * y;
}

Vector2D& Vector2D::converToUnitVect()
{
    return *this = getUnitVector();
}

Vector2D Vector2D::getUnitVector() const
{
    const float len = getLength();
    if (len != 0) {
        return *this * (1.0f / len);
    }
    return Vector2D();
}
