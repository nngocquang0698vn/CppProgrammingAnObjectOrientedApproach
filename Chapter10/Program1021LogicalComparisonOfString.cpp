/***************************************************************
 * The program to test logical operators to compare two strings. *
 ***************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main()
{
    // Creation of four C++ strings
    string strg1;
    string strg2(5, 'a');
    string strg3("Hello Friends");
    string strg4("Hi People", 4);
    // Using six logical operators (relational and equality)
    cout << "strg1 < strg2 : " << boolalpha << (strg1 < strg2);
    cout << endl;
    cout << "strg2 >= strg3: " << boolalpha << (strg2 >= strg3);
    cout << endl;
    cout << "strg1 == strg2: " << boolalpha << (strg1 == strg2);
    cout << endl;
    cout << "Hi P != strg4: " << boolalpha << ("Hi P" != strg4);
    return 0;
}