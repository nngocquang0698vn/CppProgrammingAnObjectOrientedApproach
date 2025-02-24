/***************************************************************
 * The program shows how to retrieve two substrings from a *
 * string object. *
 ***************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main()
{
    // Construction of a string
    string strg("The C++ language is fun to work with.");
    // Retrieving two substrings.
    cout << strg.substr(8) << endl;
    cout << strg.substr(4, 12) << endl;
    return 0;
}