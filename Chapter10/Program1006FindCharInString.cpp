/***************************************************************
 * A program to search for a given character using forward *
 * search to find the first occurrence or backward search to *
 * to find the last occurrence *
 ***************************************************************/
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    // Declaration of a string
    char str[] = "Hello friends.";
    // Capitalizing the first occurrence of character e
    char *cPtr = strchr(str, 'e');
    *cPtr = 'E';
    cout << "str after first change: " << str << endl;
    // Capitalizing the last occurrence of character e
    cPtr = strrchr(str, 'e');
    *cPtr = 'E';
    cout << "str after last change: " << str << endl;
    return 0;
}