#include<iostream>
using namespace std;

class circle{
    private:
        double radius;
        const double pi = 3.14159;
    public:
        circle();
        circle(double r);
        circle(double p, double r);
        void setRadius(double r);
        double getRadius();
        double getArea();
        double getDiameter();
        double getCircumference();
        void display();      
};