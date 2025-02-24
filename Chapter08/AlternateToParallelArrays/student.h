/***************************************************************
 * This is the interface file for a Student class with three *
 * private data members and four public member functions. *
 ***************************************************************/
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int score;
    char grade;

public:
    Student();
    Student(string name, int score);
    ~Student();
    void print();
};
#endif