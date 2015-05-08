#include "Point.h"

Point::Point(int x, int y) : x(x), y(y) {}

int Point::getX()
{
    return this->x;
}

int Point::getY()
{
    return this->y;
}

void Point::move(int x, int y)
{
    this->x += x;
    this->y += y;
}
