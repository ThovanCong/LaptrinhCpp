#include "circle.h"

circle::circle(){};
circle::circle(double r){
    this-> radius = r;
}

    void circle::setRadius(double r) { // mutator function
        radius = r;
    }
    double circle::getRadius() { // accessor function
        return radius;
    }
    double circle::getArea()  { // area calculation
        return pi * radius * radius;
    }
    double circle::getDiameter()  { // diameter calculation
        return radius * 2;
    }
    double circle::getCircumference()  { // circumference calculation
        return 2 * pi * radius;
    }


