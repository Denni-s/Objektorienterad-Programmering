#include "drawwindow.h"
#include <textwindow.h>
#include "dpoint.h"
#include "dsquare.h"
#include "circle.h"
#include "plus.h"
using namespace ShapeLib;
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
void task8();
void task9();
void task10();
void task11();
void task22();
void task23();
void task45();



int main(int argc, char *argv[]){

    //task2();
    //task3();
    //task4();
    //task5();
    //task6();
    //task7();
    //task8();
    //task9();
    //task10();
    //task11();
    //task22();
    task23();
    //task45();
}
void task1(){
    TextWindow textWindow1;
    textWindow1.print("Hello, World!");
    textWindow1.start();
}

void printPoint(TextWindow &textWindow, Point point)
{
   textWindow.print("(");
   textWindow.print(point.getX());
   textWindow.print(", ");
   textWindow.print(point.getY());
   textWindow.print(")");
}
void task2()
{
    TextWindow textWindow2;
    Point point1 = Point(7, 3);
    Point point2 = Point();
    textWindow2.print("The distance from origin to (7,3) is ");
    textWindow2.print(point2.getDistanceTo(point1));
    textWindow2.start();
}
void task3()
{
    TextWindow textWindow;
    Point point1 = Point(1, 2);
    Point point2 = Point(3, 4);
    textWindow.print("before: ");
    printPoint(textWindow, point1);
    textWindow.print(",  ");
    printPoint(textWindow, point2);
    textWindow.printLine();
    point2.setTo(point1);
    textWindow.print("after: ");
    printPoint(textWindow, point1);
    textWindow.print(",  ");
    printPoint(textWindow, point2);
    textWindow.start();
}
void task4()
{
    TextWindow textWindow;
    Point point1 = Point(3, 4);
    Point point2 = Point(4, 3);
    if(point1.isSameAs(&point2))
        textWindow.print("(3, 4) is same as (4,3)");
    else textWindow.print("(3, 4) is not same as (4, 3)");
    textWindow.start();
}
Point averagePoint(Point points[], int numberOfPoints)
{
    double xSum = 0;
    double ySum = 0;
    for(int i=0; i< numberOfPoints; i++){
       xSum += points[i].getX();
       ySum += points[i].getY();
   }
    Point point = Point((xSum/numberOfPoints), (ySum/numberOfPoints));
    return point;
}
void task5()
{
    TextWindow textWindow;
    Point point1 = Point(1, 4);
    Point point2 = Point(5, 3);
    Point point3 = Point(2, 2);
    Point points[] = {point1, point2, point3};
    Point point4 = averagePoint(points, 3);
    printPoint(textWindow, point4);
    textWindow.start();
}
Point closestToOrigin(Point &point1, Point *point2)
{
    Point origo = Point();
    if(origo.getDistanceTo(point1) < origo.getDistanceTo(*point2))
        return point1;
    else if(origo.getDistanceTo(point1) > origo.getDistanceTo(*point2))
        return *point2;
    else return point1, *point2;
}
void task6()
{
    TextWindow textWindow;
    Point point1 = Point(2, 5);
    Point point2 = Point(3 ,4);
    printPoint(textWindow, closestToOrigin(point1, &point2));
    textWindow.start();
}
void task7()
{
    TextWindow textWindow;
    Square square1 = Square(3.5, 0, 0);
    Circle circle1 = Circle(1.6, 0, 0);
    Circle circle2 = Circle();
    circle2.setArea(6);
    Square square2 = Square();
    square2.setCircumference(13);
    Circle circle3 = Circle();
    circle3.setCircumference(5);
    double totalArea =0;
    totalArea += square1.getArea();
    totalArea += circle1.getArea();
    totalArea += circle2.getArea();
    totalArea += square2.getArea();
    totalArea += circle3.getArea();
    textWindow.print(totalArea);
    textWindow.start();
}
void task8()
{
    TextWindow textWindow;
    Square *square = new Square(3, 8, 8);
    Point point = Point(10, 10);
    if(square->contains(&point))
        textWindow.print("The square contains the point");
    else textWindow.print("The square does not contain the point");
    textWindow.start();
    delete square;
 }
void task9(){
    TextWindow textWindow;
    Circle *circle = new Circle(3, 8, 8);
    Point point = Point(10, 10);
    if(circle->contains(&point))
        textWindow.print("The circle contains the point");
    else textWindow.print("The circle does not contain the point");
    textWindow.start();
    delete circle;
}
void task10()
{
    DrawWindow drawWindow(500, 500);
    QPainter *painter = drawWindow.getPainter();
    painter->setPen(Qt::white);
    painter->drawLine(0,0,500,500);
    painter->drawLine(0,500,500,0);
    drawWindow.commitPainterChanges();
    drawWindow.start();
}
void task11()
{
    DrawWindow drawWindow(500,500);
    Square square = Square(150,250,250);
    QPainter *painter = drawWindow.getPainter();
    painter->setPen(Qt::white);
    painter->drawEllipse(125,50,250,250);
    painter->drawEllipse(175,100,35,35);
    painter->drawEllipse(275,100,35,35);
    painter->drawEllipse(225,150,25,25);

    for(int i=200; i<275;i+=15){
        painter->drawRect(i,200,15,20);
    }
    drawWindow.commitPainterChanges();
    drawWindow.start();
}
void task12()
{
    DrawWindow drawWindow(500,500);
    QPainter *painter = drawWindow.getPainter();
    Square square = Square(20,0,50);
    painter->setPen(Qt::white);
    drawWindow.setInterval(200,[&]{square.move(10,0);painter->drawRect(square.getLeft(),250,50,50); drawWindow.commitPainterChanges();});
    drawWindow.start();
}

void task22()
{
    DrawWindow window(500,500);
    Square sq(50,200,200);
    QPainter *painter = window.getPainter();
    painter->setPen(Qt::white);
    sq.draw(painter, Qt::white);
    window.commitPainterChanges();
    window.start();
}

void task23()
{
    DrawWindow drawWindow(500,500);
    Plus plus(30,50,50);
    QPainter *painter = drawWindow.getPainter();
    painter->setPen(Qt::white);
    plus.draw(painter,Qt:: white );
    drawWindow.commitPainterChanges();
    drawWindow.start();
}
void task45()
{
    TextWindow textWindow;
    Plus plus(50,30,30);
    textWindow.print(plus.getLength());
    textWindow.start();
}
