/***************************************************************
 * We use strcat and strncast to concatenate a string at the *
 * end of another string. *
 ***************************************************************/
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    // Using strcat function
    char str1[20] = "This is ";
    const char *str2 = "a string.";
    strcat(str1, str2);
    cout << "str1: " << str1 << endl;
    // Using strncat function
    char str3[20] = "abcdefghijk";
    const char *str4 = "ABCDEFGHIJK";
    strncat(str3, str4, 4);
    cout << "str3: " << str3 << endl;
    return 0;
}