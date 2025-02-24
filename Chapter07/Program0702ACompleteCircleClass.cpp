/***************************************************************
 * A program to use a class in object-oriented programming *
 ***************************************************************/
#include <iostream>
using namespace std;

/***************************************************************
 * Class Definition: *
 * declaration of parameter constructor, default constructor, *
 * copy constructor, destructor, and other member functions *
 ***************************************************************/
class Circle
{
private:
    double radius;

public:
    Circle(double radius);         // Parameter Constructor
    Circle();                      // Default Constructor
    ~Circle();                     // Destructor
    Circle(const Circle &circle);  // Copy Constructor
    void setRadius(double radius); // Mutator
    double getRadius() const;      // Accessor
    double getArea() const;        // Accessor
    double getPerimeter() const;   // Accessor
};
/***************************************************************
 * Member Function Definition: *
 * Definition of parameter constructor, default constructor, *
 * copy constructor, destructor, and other member functions *
 ***************************************************************/
// Definition of parameter constructor
Circle ::Circle(double rds)
    : radius(rds)
{
    cout << "The parameter constructor was called. " << endl;
}
// Definition of default constructor
Circle ::Circle()
    : radius(0.0)
{
    cout << "The default constructor was called. " << endl;
}
// Definition of copy constructor
Circle ::Circle(const Circle &circle)
    : radius(circle.radius)
{
    cout << "The copy constructor was called. " << endl;
}
// Definition of destructor
Circle ::~Circle()
{
    cout << "The destructor was called for circle with radius ";
    cout << endl;
}
// Definition of setRadius member function
void Circle ::setRadius(double value)
{
    radius = value;
}
// Definition of getRadius member function
double Circle ::getRadius() const
{
    return radius;
}
// Definition of getArea member function
double Circle ::getArea() const
{
    const double PI = 3.14;
    return (PI * radius * radius);
}
// Definition of getPerimeter member function
double Circle ::getPerimeter() const
{
    const double PI = 3.14;
    return (2 * PI * radius);
}
/***************************************************************
 * Application : *
 * Creating three objects of class Circle (circle1, circle2, *
 * and circle3) and applying some operation on each object *
 ***************************************************************/
int main()
{
    // Instantiation of circle1 and applying operations on it
    Circle circle1(5.2);
    cout << "Radius: " << circle1.getRadius() << endl;
    cout << "Area: " << circle1.getArea() << endl;
    cout << "Perimeter: " << circle1.getPerimeter() << endl
         << endl;
    // Instantiation of circle2 and applying operations on it
    Circle circle2(circle1);
    cout << "Radius: " << circle2.getRadius() << endl;
    cout << "Area: " << circle2.getArea() << endl;
    cout << "Perimeter: " << circle2.getPerimeter() << endl
         << endl;
    // Instantiation of circle3 and applying operations on it
    Circle circle3;
    cout << "Radius: " << circle3.getRadius() << endl;
    cout << "Area: " << circle3.getArea() << endl;
    cout << "Perimeter: " << circle3.getPerimeter() << endl
         << endl;
    // Calls to destructors occur here
    return 0;
}