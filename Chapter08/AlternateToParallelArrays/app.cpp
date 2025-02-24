/***************************************************************
 * The application file to create objects from the Student *
 * class and print the name, score, and grade of each student *
 ***************************************************************/
#include "student.h"
#include "iomanip"
int main()
{
    // Declaration of an array of Students using default constructors
    Student students[5];
    // Instantiation of five objects using parameter constructors
    students[0] = Student("George", 82);
    students[1] = Student("John", 73);
    students[2] = Student("Luci", 91);
    students[3] = Student("Mary", 72);
    students[4] = Student("Sue", 65);
    // Printing students' name, score, and grade
    for (int i = 0; i < 5; i++)
    {
        students[i].print();
    }
    return 0;
}