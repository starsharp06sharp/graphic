#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"


class Rectangle : public Shape
{
    public:
        Rectangle(int, int, int, int);
        void draw();
    protected:
    private:
        int TopX, TopY;
        int LenX, LenY;
};

#endif // RECTANGLE_H
