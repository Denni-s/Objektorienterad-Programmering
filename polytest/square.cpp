#include "square.h"
using namespace ShapeLib;


Square::Square(const double width1, const double centerX, const double centerY){ //konstruktor
    width = width1;
    center = new Point(centerX, centerY);
}

bool Square::contains(const Point *point){
    return (getLeft() < point->getX() && point->getX() < getRight()  && getTop() < point->getY() && point->getY() < getBottom());
}

double Square::getCircumference() const{
    return width*4;
}

void Square::setCircumference(const double newCircumference){
    width = newCircumference/4;
}

double Square::getArea(){

}
