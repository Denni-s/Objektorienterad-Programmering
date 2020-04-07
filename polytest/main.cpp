#include <iostream>
#include <math.h>
#include "dizzlepoint.h"
#include "shape.h"
#include "square.h"
#include "circle.h"
#include <iostream>
using namespace ShapeLib;
void task3();
void task33();

int main()
{
    /*Point point = Point(50,30);
     Square sqr = Square(20,0,0);
     Circle crk = Circle(20,100,100);
     Shape shp = sqr;
     Shape shp2 = crk;
     printf("%lf",shp.getLeft());
     printf("\n%lf\n",crk.getCircumference());
     printf("%lf", sqr.getLeft());
     crk.setCircumference(60);
     printf("\n%lf", crk.getCircumference());
     if(sqr.contains(&point))
         printf("\nsquare contains point\n");
     else printf("\nsquare does not contain point\n");*/
     //task3();
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
