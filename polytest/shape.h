#ifndef SHAPE_H
#define SHAPE_H
#include "dizzlepoint.h"
namespace ShapeLib {



class Shape
{
public:
    double getWidth();
    double getLeft();
    double getRight();
    double getTop();
    double getBottom();
    bool contains(const Point* point);
    double getCircumference();
    void setCircumference();
    double getArea();
    void setArea();



protected:
    Point *center;
    double width;

};

}
#endif
