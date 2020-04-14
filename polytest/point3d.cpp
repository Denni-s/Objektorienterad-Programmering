#include "point3d.h"
#include <math.h>
using namespace ShapeLib;

threeDpoint::threeDpoint()//defaultkonstruktor
{
    this->setX(0);
    this->setY(0);
    _z=0;
}

threeDpoint::threeDpoint(const double x, const double y, const double z) //konstruktor
{
    this->setX(x);
    this->setY(y);
    this->_z = z;

}

double threeDpoint::getZ() const
{
    return _z;
}

void threeDpoint::setZ(const double newZ)
{
    _z = newZ;
}

void threeDpoint::changeZ(const double dz)
{
    _z+= dz;
}

bool threeDpoint::isSameAs(const threeDpoint* otherPoint)
{
    if(this->getX() == otherPoint->getX() && this->getY() == otherPoint->getY() && this->getZ() == otherPoint->getZ())
        return true;
    return false;
}

void threeDpoint::setTo(const threeDpoint &otherPoint)
{
    this->setX(otherPoint.getX());
    this->setY(otherPoint.getY());
    this->setZ(otherPoint.getZ());
}

double threeDpoint::getDistanceTo(const threeDpoint otherPoint)
{
   return sqrt(pow(this->getX()-otherPoint.getX(),2) + pow(this->getY()-otherPoint.getY(),2) + pow(this->getZ()-otherPoint.getZ(),2));
}
