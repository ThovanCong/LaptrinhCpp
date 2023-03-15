#include "circle.h"

main(){
    double r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    circle c(r);
    cout << "Area of the circle is: " << c.getArea() << endl;
    cout << "Diameter of the circle is: " << c.getDiameter() << endl;
    cout << "Circumference of the circle is: " << c.getCircumference() << endl;
    return 0;
}