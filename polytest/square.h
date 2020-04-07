#include "dizzlepoint.h"
#include "shape.h"
namespace ShapeLib {

class Square: public Shape{

public:
    Square();
    Square(const double width1, const double centerX, const double centerY);

    double getCircumference() const;

    void setCircumference(const double newCircumference);

    double getArea() const;

    void setArea(const double newArea);

    bool contains(const Point *point);

    double getArea();
 };

}
