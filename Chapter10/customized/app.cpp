/***************************************************************
 * A program that tests the customized functions defined in the *
 * customized header file. *
 ***************************************************************/
#include "customized.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
    // Declaration of original string
    string strg("abcdefgh");
    // Testing pushFront function
    cout << "String before calling pushFront: " << strg << endl;
    pushFront(strg, 'A');
    cout << "String after calling pushFront: " << strg << endl;
    cout << endl;
    // Testing pushBack function
    cout << "String before calling pushBack: " << strg << endl;
    pushBack(strg, 'Z');
    cout << "String after calling pushBack: " << strg << endl;
    cout << endl;
    // Testing popFront function
    cout << "String before calling popFront: " << strg << endl;
    char c1 = popFront(strg);
    cout << "String after calling popFront: " << strg << endl;
    cout << "The popped character: " << c1 << endl;
    cout << endl;
    // Testing popBack function
    cout << "String before calling popBack: " << strg << endl;
    char c2 = popBack(strg);
    cout << "String after calling popBack: " << strg << endl;
    cout << "The popped character: " << c2 << endl;
    cout << endl;
    return 0;
}