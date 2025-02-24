/***************************************************************
 * The program shows how to create C-strings and use input and *
 * output operations with them. *
 ***************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Create one constant and one non-constant string.
    char str1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    const char str2[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    // Create two constant string types and use string literals.
    const char *str3 = "Goodbye";
    const char *str4 = "Goodbye\0 my friend";
    // Printing four strings
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
    cout << "str3: " << str3 << endl;
    cout << "str4: " << str4 << endl
         << endl;
    // Create and input a fifth string.
    char str5[20];
    cout << "Enter the characters for str5: ";
    cin >> str5;
    cout << "str5: " << str5;
    return 0;
}