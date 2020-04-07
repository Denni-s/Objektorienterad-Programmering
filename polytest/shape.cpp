#include "shape.h"
//klar
using namespace ShapeLib;

Shape::Shape()
{
    width = 0;
    center = new Point();
}

Shape::Shape(const double width, const double centerX, const double centerY):width(width){
    center = new Point(centerX, centerY);
}

void Shape::move(const double dx, const double dy){
    center->changeX(dx);
    center->changeY(dy);
}

  double Shape::getWidth(){return width;}

  double Shape::getRight(){return center->getX() + width/2;}

  double Shape::getLeft(){return center->getX() - width/2;}

  double Shape::getTop(){return center->getY() - width/2;}

  double Shape::getBottom(){return center->getY() + width/2;}


  Shape::~Shape(){
      delete center;
  }
