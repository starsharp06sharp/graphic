#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"
#include "Shape.h"

class Circle : private Point, public Shape
{
    public:
        Circle(Point&, int);
        Circle(int, int, int);
        void move(int, int);
        Point& getCenter();
        void draw();
    protected:
    private:
        int radius;
};

#endif // CIRCLE_H
