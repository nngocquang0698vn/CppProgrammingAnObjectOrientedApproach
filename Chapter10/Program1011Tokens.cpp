/***************************************************************
 * The program shows how we can use the strtok function to extract *
 * tokens from a date. *
 ***************************************************************/
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    // Declaration of a sentence and a pointer
    char str[] = "July 15, 2015";
    char *p;
    // Use strtok to extract all words
    p = strtok(str, ", "); // first call
    while (p)
    {
        cout << p << endl;
        p = strtok(0, ", "); // second, third, and fourth calls
    }
    return 0;
}