#include "dizzlepoint.h"
#include "shape.h"
namespace ShapeLib {


class Square: public Shape
{
public:
    Square(const double width1, const double centerX, const double centerY);
    bool contains(const Point *point);
    double getCircumference() const;
    void setCircumference(const double newCircumference);
    double getArea();
 };

}
