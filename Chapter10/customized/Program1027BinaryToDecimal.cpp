/***************************************************************
 * A program to change a binary string to a decimal integer. *
 ***************************************************************/
#include "customized.h"
#include <string>
#include <iostream>
using namespace std;
/***************************************************************
 * A function to change a numeric character to its equivalent *
 * integer value. *
 ***************************************************************/
int findValue(char ch)
{
    return static_cast<int>(ch) - 48;
}

int main()
{
    // Declaration, inputting, and validation of binary string
    string binary;
    do
    {
        cout << "Enter binary string: ";
        getline(cin, binary);
    } while (binary.find_first_not_of("01") < binary.size());
    // Initialization and calculation of decimal integer
    int base = 2;
    int decimal = 0;
    while (!binary.empty())
    {
        decimal *= base;
        char ch = popFront(binary);
        decimal += findValue(ch);
    }
    cout << "Decimal value: " << decimal;
    return 0;
}