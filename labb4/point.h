#pragma once

namespace ShapeLib{

    /**
    * A class representing a point in a two-dimensional plane.
    *
    * This class represents a point in a two-dimensional plane with an x-axes
    * and y-axes.
    */
    template<class dataType>
    class Point{

    public:

        /**
        * Creates a new point representing origin.
        */
        Point(){
            x = 0;
            y = 0;
        }

        /**
        * Creates a new point representing the given coordinates.
        *
        * @param x The x-coordinate of the point.
        * @param y The y-coordinate of the point.
        */
        Point(const dataType x, const dataType y): x(x), y(y){

        }

        /**
        * Returns the point's x-coordinate.
        *
        * @return The x-coordinate of the point.
        */
        dataType getX() const;

        /**
        * Returns the point's y-coordinate.
        *
        * @return The y-coordinate of the point.
        */
        dataType getY() const;

        /**
        * Changes the point's x-coordinate.
        *
        * @param newX The new value for the x-coordinate.
        */
        void setX(const dataType newX);

        /**
        * Changes the point's y-coordinate.
        *
        * @param newY The new value for the y-coordinate.
        */
        void setY(const dataType newY);

        /**
        * Checks if this point is the same as otherPoint.
        *
        * @param otherPoint The point to compare to.
        * @return true if the points are equal, otherwise false.
        */
        bool isSameAs(const Point *otherPoint) const;

        /**
        * Sets the coordinates of this point to the same as otherPoint.
        *
        * @param otherPoint The point to set the coordinates to.
        */
        void setTo(const Point &otherPoint);

        /**
        * Returns the distance to otherPoint from this point.
        *
        * @param otherPoint The point to compute the distance to.
        * @return The distance.
        */
        dataType getDistanceTo(const Point otherPoint) const;

        /**
        * Changes the x-coordinate by dx.
        *
        * @param dx The amount the x-coordinate should be changed.
        */
        void changeX(const dataType dx);

        /**
        * Changes the y-coordinate by dy.
        *
        * @param dy The amount the y-coordinate should be changed.
        */
        void changeY(const dataType dy);

    private:
        dataType x;
        dataType y;

    };

}


