#include "square.h"
//klar
using namespace ShapeLib;

Square::Square(){
    width = 0;
    center = new Point();
}

Square::Square(const double width1, const double centerX, const double centerY){ //konstruktor
    width = width1;
    center = new Point(centerX, centerY);
}

double Square::getCircumference() const{
    return width*4;
}

void Square::setCircumference(const double newCircumference){
    width = newCircumference/4;
}
double Square::getArea(){
    return pow(width,2);
}

void Square::setArea(const double newArea){
    width = sqrt(newArea);
}


bool Square::contains(const Point *point){
    return (getLeft() < point->getX() && point->getX() < getRight()
            && getTop() < point->getY() && point->getY() < getBottom());
}

