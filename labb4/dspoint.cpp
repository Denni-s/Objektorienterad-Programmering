#include "dspoint.h"
using namespace ShapeLib;

template<class dataType>
dsPoint<dataType>::dsPoint() // defaultkonstruktor
{
x = 0;
y = 0;
}



template<class dataType>
dsPoint<dataType>::dsPoint(const dataType x, const dataType y):x(x), y(y){}

template<class dataType>
dataType dsPoint<dataType>::getX()const{
    return x;
}

template<class dataType>
dataType dsPoint<dataType>::getY()const{
    return y;
}

template<class dataType>
void dsPoint<dataType>::setX(const dataType newX){
    x = newX;
}

template<class dataType>
void dsPoint<dataType>::setY(const dataType newY){
    y = newY;
}

template<class dataType>
dataType dsPoint<dataType>::getDistanceTo(const dsPoint otherPoint) const{
    return sqrt(pow(this->getX()-otherPoint.getX(), 2) + pow(this->getY()-otherPoint.getY(),2));
}


