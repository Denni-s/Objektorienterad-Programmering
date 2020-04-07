#ifndef SHAPE_H
#define SHAPE_H
#include "dizzlepoint.h"
#include <math.h>
namespace ShapeLib {



class Shape
{
public:
    Shape();

    Shape(const double width, const double centerX, const double centerY);

    double getWidth();

    void move(const double dx, const double dy);

    double getLeft();

    double getRight();

    double getTop();

    double getBottom();

    virtual double getCircumference(){}

    virtual void setCircumference(const double newCircumference){}

    virtual double getArea(){}

    virtual void setArea(const double newArea){}

    virtual bool contains(const Point* point){}








    virtual ~Shape();

protected:
    Point *center;
    double width;

};

}
#endif
