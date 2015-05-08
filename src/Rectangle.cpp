#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(int tx, int ty, int lx, int ly) :
                                                      TopX(tx),
                                                      TopY(ty),
                                                      LenX(lx),
                                                      LenY(ly) {}

void Rectangle::draw()
{
    std::cout<<"TopX:"<<TopX<<"TopY"<<TopY<<"LenX:"<<LenX<<"LenY:"<<LenY<<std::endl;
}
