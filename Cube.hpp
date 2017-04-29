#ifndef __CUBE
#define __CUBE

#include <g3x.h>
#include "Shape.hpp"

class Cube : public Shape {
public:
    Cube(int n); /* Constructeur */
    ~Cube(); /* Destructeur */

    bool contains(const Point &p) const;
};

#endif
