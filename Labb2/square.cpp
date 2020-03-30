#include "dsquare.h"
using namespace ShapeLib;
Square::Square()
{
sideLength = 0;
center = new Point(0,0);
}

Square::Square(const double sideLength, const double centerX, const double centerY): sideLength(sideLength) //konstruktor
{
    center = new Point(centerX, centerY);
}
Square::~Square() // Destruktor
{
    delete center;
}

double Square::getSideLength() const
{
    return sideLength;
}
double Square::getCircumference() const
{
    return sideLength*4;
}
void Square::setCircumference(const double newCircumference)
{
    sideLength = newCircumference/4;
}
double Square::getArea() const
{
    return sideLength*2;
}
void Square::setArea(const double newArea)
{
    sideLength = newArea / sideLength;
}
void Square::move(const double dx, const double dy)
{
    center->changeX(dx);
    center->changeY(dy);
}
bool Square::contains(const Point *point) const
{
    return (getLeft() < point->getX() && point->getX() < getRight()  && getTop() < point->getY() && point->getY() < getBottom());
}
double Square::getLeft() const
{
    return center->getX() - (sideLength/2);
}
double Square::getRight() const
{
    return center->getX() + (sideLength/2);
}
double Square::getTop() const
{
    return center->getY() - (sideLength/2);
}
double Square::getBottom() const
{
    return center->getY() + (sideLength/2);
}
void Square::draw(QPainter* painter, const Qt::GlobalColor backgroundColor) const
{

    painter->fillRect(center->getX()-sideLength/2, center->getY()-sideLength/2, sideLength/2, sideLength/2, backgroundColor);
}
