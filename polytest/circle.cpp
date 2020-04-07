#include "circle.h"
//klar
using namespace ShapeLib;
Circle::Circle(){
    width = 0;
    center = new Point();
}
Circle::Circle(const double radius, const double centerX, const double centerY)
{
    width = radius*2;
    center = new Point(centerX,centerY);
}

    double Circle::getRadius()const {return width/2;}

    double Circle::getCircumference()
    {
        return (M_PI * (width));
    }

    void Circle::setCircumference(const double newCircumference)
    {
        width = (newCircumference/(M_PI));
    }

    double Circle::getArea()
    {
        return M_PI*pow(width/2,2);
    }

    void Circle::setArea(const double newArea)
    {
        width = 2*(sqrt(newArea/M_PI));
    }

    bool Circle::contains(const Point *point)
    {
        return center->getDistanceTo(*point) <= width/2;
    }





