#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{
private:

public:
    Rectangle();
    double width;
    double height;
    double getArea() { return width * height; }
    double getCircum() { return 2 * (width * height); }
};

#endif // RECTANGLE_H
