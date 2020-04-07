#include "circle.h"
#include <math.h>
using namespace ShapeLib;

Circle::Circle(const double width1, const double centerX, const double centerY)
{
    width = width1;
    center = new Point(centerX,centerY);
}

bool Circle::contains(const Point *point)
{
    return center->getDistanceTo(*point) <= width/2;
}

double Circle::getCircumference()
{
    return (M_PI * (width));
}

void Circle::setCircumference(const double newCircumference)
{
    width = (newCircumference/(M_PI));
}
