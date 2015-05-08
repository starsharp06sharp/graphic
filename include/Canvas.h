#ifndef CANVAS_H
#define CANVAS_H

#include "Circle.h"
#include "Shape.h"

const int MAX_NUM = 100;

class Canvas
{
    public:
        Canvas();
        void append(Shape*);
        void draw();
    protected:
    private:
        Shape* graphs[MAX_NUM];
        int num;
};

#endif // CANVAS_H
