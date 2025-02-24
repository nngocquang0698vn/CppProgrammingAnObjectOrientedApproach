/***************************************************************
 * The program shows how to access the elements of an array *
 * using either the indexes or pointers to elements. *
 ***************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // Declaration and initialization of an array
    int numbers[5] = {10, 11, 12, 13, 14};
    // Accessing elements through the indexes
    cout << "Accessing elements through indexes" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    // Accessing elements through the pointers
    cout << "Accessing elements through pointers" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *(numbers + i) << " ";
    }
    return 0;
}