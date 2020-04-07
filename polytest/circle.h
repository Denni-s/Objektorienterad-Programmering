//#ifndef CIRCLE_H
//#define CIRCLE_H
#include "dizzlepoint.h"
#include "shape.h"
namespace ShapeLib {



class Circle: public Shape
{
public:
    Circle(const double width1, const double centerX, const double centerY);
    bool contains(const Point *point);
    double getCircumference();
    void setCircumference(const double newCircumference);
};

//#endif // CIRCLE_H
}
