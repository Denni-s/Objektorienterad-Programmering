#include <iostream>
#include <math.h>
#include "dizzlepoint.h"
#include "shape.h"
#include "square.h"
#include "circle.h"
using namespace ShapeLib;
void task3();

int main()
{
    Point point = Point(50,30);
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
     else printf("\nsquare does not contain point\n");
     task3();
}

void task3(){
    Square sq1 = Square(3.5,10,10);
    Circle ckl1 = Circle(3.2,10,10);
    Circle ckl2 = Circle(1,10,10);
    printf("%lf",ckl2.getCircumference());
    Shape shapes[10];


}
