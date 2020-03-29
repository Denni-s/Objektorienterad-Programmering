#include "dpoint.h"
#include <iostream>
#include <math.h>
using namespace ShapeLib;

Point::Point()
{
x = 0;
y = 0;
}

Point::Point(const double x, const double y):x(x),y(y){} //konstruktor


void Point::setX(const double newX)
{
     x= newX;
}
void Point::setY(const double newY)
{
    y = newY;
}
double Point::getX() const
{
    return x;
}
double Point::getY() const
{
    return y;
}
bool Point::isSameAs(const Point *otherPoint) const
{
    if((this->getX() == otherPoint->getX()) && this->getY() == otherPoint->getY())
        return true;
    return false;
}
void Point::setTo(const Point &otherPoint)
{
    this->setX(otherPoint.getX());
    this->setY(otherPoint.getY());
}
double Point::getDistanceTo(const Point otherPoint) const
{
    return sqrt(pow(this->getX()-otherPoint.getX(), 2) + pow(this->getY()-otherPoint.getY(),2));
}
void Point::changeX(const double dx)
{
    x+=dx;
}
void Point::changeY(const double dy)
{
    y+=dy;
}

