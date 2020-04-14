#include "dizzlepoint.h"





namespace ShapeLib {
    class threeDpoint: public ShapeLib::Point
    {
    private:
        double _z;
    public:

        /**
         * Defaultkonstruktor, skapar en 3d Point i origin (0,0,0)
        */
        threeDpoint();


        /**
         * Creates a new point at (x,y,z)
        */
        threeDpoint(const double x, const double y, const double z);

        /**
         * Returns the point's z-coordinate
        */
        double getZ() const;

        /**
         * Changes the point's z-coordinate
        */
        void setZ(const double newZ);

        /**
          * Changes the z-coordinate by dz
        */
        void changeZ(const double dz);

        /**
          * Checks if this point is the same as otherPoint
        */
        bool isSameAs(const threeDpoint* otherPoint);

        /**
          * Returns the distance to otherPoint from this point
        */
        double getDistanceTo(const threeDpoint otherPoint);

        /**
          * Sets the coordinates of this point to the same as otherPoint
        */
        void setTo(const threeDpoint &otherPoint);


        };

    }
