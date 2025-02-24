/***************************************************************
 * A program to test input/output operators with string objects. *
 ***************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main()
{
    // Constructing a default object
    string strg;
    // Inputting and outputting values for the strg object
    cout << "Input the string: ";
    cin >> strg;
    cout << strg << endl;
    return 0;
}