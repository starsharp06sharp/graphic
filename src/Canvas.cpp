#include "Canvas.h"

Canvas::Canvas() : num(0) {}

void Canvas::append(Shape* target)
{
    graphs[num++] = target;
}

void Canvas::draw()
{
    for (int i = 0; i < num; i++) graphs[i] -> draw();
}
