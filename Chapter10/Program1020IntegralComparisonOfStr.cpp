/***************************************************************
 * The program to test integral comparison. *
 ***************************************************************/
#include <string>
#include <iostream>
using namespace std;
int main()
{
    // Declaration of two C++ strings
    string strg1("Hello my friends");
    string strg2("Hello friends");
    // Comparing two C++ strings
    cout << strg1 << " compared with " << strg2 << ": ";
    cout << strg1.compare(strg2) << endl;
    // Comparing part of the two C++ strings
    cout << "Hello compared with Hello: ";
    cout << strg1.compare(0, 5, strg2, 0, 5) << endl;
    // Comparing part of the first C++ string and a C-string
    cout << "Hello compared with Hello: ";
    cout << strg1.compare(0, 5, strg2) << endl;
    // Comparing part of a C++ string and part of a C-string
    cout << "Hel compared with Hell: ";
    cout << strg2.compare(0, 3, "Hello", 4);
    return 0;
}