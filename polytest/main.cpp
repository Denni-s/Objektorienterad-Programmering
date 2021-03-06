#include <iostream>
#include <math.h>
#include "dizzlepoint.h"
#include "shape.h"
#include "square.h"
#include "circle.h"
#include <iostream>
#include "textwindow.h"
#include "drawwindow.h"
using namespace ShapeLib;
void task3();
void task33();

int main()
{
    task33();
}

void task3(){
    Square sq1 = Square(3.5,10,10);
    Circle ckl1 = Circle(3.2,10,10);
    Circle ckl2 = Circle(1,10,10);
    Shape shp1 = ckl2;
}

void task33(){
    Square s1(3.5,0,0);
    Square s2;
    s2.setCircumference(13);
    Circle c1(1.6,0,0);
    Circle c2; c2.setArea(6);
    Circle c3;
    c3.setCircumference(5);

    Shape* ss1 = &s1;
    Shape* ss2 = &s2;
    Shape* sc1 = &c1;
    Shape* sc2 = &c2;
    Shape* sc3 = &c3;

    double sumArea = 0;
    Shape* shapes[] = {ss1,ss2,sc1,sc2,sc3};
    for(int i=0;i<5;i++)
        sumArea+= shapes[i]->getArea();
    printf("sumarea = %lf", sumArea);

}
