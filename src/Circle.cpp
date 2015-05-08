#include <iostream>
#include "Circle.h"

Circle::Circle(Point& center,int radius) : Point(center), radius(radius) {}

Circle::Circle(int x,int y,int radius) : Point(x,y), radius(radius) {}

void Circle::move(int x, int y)
{
    Point::move(x, y);
}

Point& Circle::getCenter()
{
    return *this;
}

void Circle::draw()
{
    std::cout<<"Center:"<<'('<<getX()<<','<<getY()<<')'<<"Radius:"<<radius<<std::endl;
}
