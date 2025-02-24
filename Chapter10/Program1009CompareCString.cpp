/***************************************************************
 * The program shows how we can compare two strings using the *
 * strcmp and strncmp functions. *
 ***************************************************************/
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    // Declaration of two C-strings
    const char *str1 = "Hello Alice.";
    const char *str2 = "Hello John.";
    const char *str3 = "Hello Betsy.";
    // Comparison use the whole length
    cout << "Comparing str1 and str2: ";
    cout << strcmp(str1, str2) << endl;
    cout << "Comparing str2 and str3: ";
    cout << strcmp(str2, str3) << endl;
    // Comparison using one the first characters
    cout << "Comparing first 5 characters of str1 and str2: ";
    cout << strncmp(str1, str2, 5);
    return 0;
}