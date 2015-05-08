#ifndef POINT_H
#define POINT_H

class Point
{
    public:
        Point(int, int);
        int getX();
        int getY();
        void move(int, int);
    protected:
    private:
        int x ,y;
};

#endif // POINT_H
