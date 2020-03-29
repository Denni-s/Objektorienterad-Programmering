#include "plus.h"
using namespace ShapeLib;
Plus::Plus() // defaultkonstruktor
{
length = 0;
center = new Point(0,0);
}

Plus::Plus(const double length, const double centerX, const double centerY) : length(length)// konstruktor
{
    center = new Point(centerX, centerY);
}

double Plus::getLength() const {return length;}
double Plus::getTop() const {return center->getY() - length;}
double Plus::getBottom() const {return center->getY() + length;}
double Plus::getLeft() const {return center->getX() - length;}
double Plus::getRight() const {return center->getX() + length;}

void Plus::move(const double dx, const double dy)
{
    center->changeX(dx);
    center->changeY(dy);
}
void Plus::draw(QPainter *painter, const Qt::GlobalColor color/*, const double length*/) const
{
    painter->setPen(color);
    painter->drawPoint(center->getX(),center->getY());
    painter->drawLine(center->getX(),center->getY(),center->getX()+length, center->getY());
    painter->drawLine(center->getX(),center->getY(),center->getX(),center->getY()+getLength());
    painter->drawLine(center->getX(),center->getY(),center->getX()-getLength(), center->getY());
    painter->drawLine(center->getX(),center->getY(),center->getX(),center->getY()-getLength());

}
Plus::~Plus(){
    delete center;
}
