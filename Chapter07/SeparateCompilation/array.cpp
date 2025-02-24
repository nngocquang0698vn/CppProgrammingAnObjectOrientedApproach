/***************************************************************
 * A program that uses the compiled version of the Circle class *
 * to create an array of three circles. *
 ***************************************************************/
#include <iostream>
#include "circle.h"
using namespace std;

int main()
{
    // Declaration of array
    Circle circles[3];
    // Instantiation of objects
    circles[0] = Circle(3.0);
    circles[1] = Circle(4.0);
    circles[2] = Circle(5.0);
    // Printing information
    for (int i = 0; i < 3; i++)
    {
        cout << "Information about circle [" << i << "]" << endl;
        cout << "Radius: " << circles[i].getRadius() << "   ";
        cout << "Area: " << circles[i].getArea() << "   ";
        cout << "perimeter: " << circles[i].getPerimeter() << "   ";
        cout << endl;
    }
    return 0;
}