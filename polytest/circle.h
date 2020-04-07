#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"
namespace ShapeLib {
//klar


class Circle: public Shape
{
public:
    Circle();

    Circle(const double width1, const double centerX, const double centerY);

    double getRadius()const;

    double getCircumference();

    void setCircumference(const double newCircumference);

    double getArea();

    void setArea(const double newArea);

     bool contains(const Point *point);






};

#endif // CIRCLE_H
}
