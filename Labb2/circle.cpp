#include "circle.h"
#include <math.h>
using namespace ShapeLib;
Circle::Circle()
{
radius = 0;
center = new Point(0,0);
}

Circle::Circle(const double radius, const double centerX, const double centerY) // konstruktor
{
    center = new Point(centerX,centerY); // och en mittpunkt
}
Circle::~Circle() // Destruktor
{
    delete center;
}
double Circle::getRadius() const
{
    return radius;
}
double Circle::getCircumference() const
{
    return (M_PI * (radius*2));
}
void Circle::setCircumference(const double newCircumference)
{
    radius = newCircumference/(2*M_PI);
}
double Circle::getArea() const
{
    return (M_PI * pow(radius,2));
}
void Circle::setArea(const double newArea)
{
    radius = sqrt(newArea/M_PI);
}
bool Circle::contains(const Point *point) const
{
    return center->getDistanceTo(*point) <= radius;
}
void Circle::move(const double dx, const double dy)
{
    center->changeX(dx);
    center->changeY(dy);
}
double Circle::getLeft() const
{
    return center->getX() - radius;
}
double Circle::getRight() const
{
    return center->getX() + radius;
}
double Circle::getTop() const
{
    return center->getY() - radius;
}
double Circle::getBottom() const
{
    return center->getY() + radius;
}
void Circle::draw(QPainter *painter, const Qt::GlobalColor color) const
{
    painter->setPen(color);
    painter->drawEllipse(center->getX(),center->getX(), radius, radius);

}
