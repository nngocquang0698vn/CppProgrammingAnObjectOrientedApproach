/***************************************************************
 * The program shows how to use the strstr member function to *
 * find the occurrence of a substring in a string. *
 ***************************************************************/
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    // Creating a string
    char str[] = "Hello friends of mine.";
    // Finding the location of the substring
    char *sPtr = strstr(str, "friends");
    cout << "The substring starts at index:  " << sPtr - str;
    return 0;
}