#pragma once
#include "dpoint.h"
#include "drawwindow.h"
#include <QPainter>
namespace ShapeLib {



    class Plus
    {
public:
    /**
     * Creates a new plus symbol with length 0 positioned at origin
    **/
    Plus();

    /**
      * Creates a new plus symbol with given length positioned at
      * (centerX, centerY)
      **/
    Plus(const double length, const double centerX=0, const double centerY=0);

    /**
      * returns this plus sybmols length
      **/
    double getLength() const;

    /**
      * Sets this plus symbols length
      **/
    void setLength(const double newLength);

    /**
      * Moves this circle by dx in the x-direction and dy in the y-direction
      **/
    void move(const double dx, const double dy);

    /**
      * returns the x-value of the end of the left line
      **/
    double getLeft() const;

    /**
      * returns the x-value of the end of the right line
      **/
    double getRight() const;

    /**
      * returns the y-value of the end of the top line
      **/
    double getTop() const;

    /**
      * returns the y-value of the end of the bottom line
      **/
    double getBottom() const;

    /**
     * draws the plus symbol with the provided color and painter
     **/
    void draw(QPainter *painter, const Qt::GlobalColor color/*, const double length*/) const;

    ~Plus();

  private:
    double length;
    Point *center;


    };

}
