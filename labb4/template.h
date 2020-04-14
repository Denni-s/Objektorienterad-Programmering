#include <iostream>

#include <math.h>
using namespace std;

template<class dataType>
class Point{

public:
    dataType x;
    dataType y;

    Point(dataType x, dataType y): x(x), y(y){}

    dataType getX(){
        return x;
    }

    dataType getY(){
        return y;
    }
    void setX(const dataType newX){
        x = newX;
    }
    void setY(const dataType newY){
        y = newY;
    }
    dataType getDistanceTo(Point otherPoint) const {
       return sqrt(pow(x -otherPoint.getX(), 2) + pow(y-otherPoint.getY(),2));
    }

};
