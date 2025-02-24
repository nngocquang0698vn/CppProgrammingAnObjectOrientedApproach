/***************************************************************
 * The program shows how to retrieve a single character in a *
 * string. *
 ***************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main()
{
    // Construction of a string
    string strg("A short string");
    // Retrieving and printing characters at index 5 and 8
    cout << "Character at index 5: " << strg[5] << endl;
    cout << "Character at index 8: " << strg.at(8) << endl;
    return 0;
}