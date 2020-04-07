#include "shape.h"
#include "dizzlepoint.h"
using namespace ShapeLib;


  double Shape::getWidth(){return width;}
  double Shape::getLeft(){return center->getX() - width/2;}
  double Shape::getRight(){return center->getX() + width/2;}
  double Shape::getTop(){return center->getY() - width/2;}
  double Shape::getBottom(){return center->getY() + width/2;}
  double getCircumference(){}
  double getArea(){}
  double setArea(){}
