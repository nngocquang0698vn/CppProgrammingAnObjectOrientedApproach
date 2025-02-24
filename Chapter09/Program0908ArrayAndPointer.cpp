/***************************************************************
 * The program proves that the system stores the address of each *
 * element in the array in a constant pointer. *
 ***************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Declaration of an array of five int
    int arr[5];
    // Printing the addresses through pointers and the & operator
    for (int i = 0; i < 5; i++)
    {
        cout << "Address of cell " << i << " Using pointer: ";
        cout << arr + i << endl;
        cout << "Address of cell " << i << " Using & operator: ";
        cout << &arr[i] << endl
             << endl;
    }
    return 0;
}