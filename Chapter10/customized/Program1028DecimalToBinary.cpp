/***************************************************************
 * A program to change a decimal numeral to a binary string *
 ***************************************************************/
#include <string>
#include "customized.h"
#include <iostream>
using namespace std;

/***************************************************************
 * A function to change an integer to a character using the *
 * char function *
 ***************************************************************/
char findChar(int digit)
{
    return char(digit + 48);
}

int main()
{
    // Declaration of variables
    int decimal;
    int base = 2;
    string strg;
    // Input and validation of decimal number
    do
    {

        cout << "Enter a positive decimal: ";
        cin >> decimal;
    } while (decimal <= 0);
    // Conversion to binary
    while (decimal > 0)
    {
        int digit = decimal % base;
        char ch = findChar(digit);
        pushFront(strg, ch);
        decimal /= base;
    }
    // Outputting binary
    cout << "Binary: " << strg;
    return 0;
}