/***************************************************************
 * The program shows how a function can reverse the elements *
 * of an array using a pointer. *
 ***************************************************************/
#include <iostream>
using namespace std;
void reverse(int *, int);
int main()
{
    // Array declaration and initialization
    int arr[5] = {10, 11, 12, 13, 14};
    // Calling function
    reverse(arr, 5);
    // Printing array after reversed
    cout << "Reversed array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << " ";
    }
    return 0;
}
/***************************************************************
 * The function uses a pointer to the first element of the array *
 * and the size of the array to reverse the elements in place. *
 ***************************************************************/
void reverse(int *pArr, int size)
{
    int i = 0;
    int j = size - 1;
    while (i < size / 2)
    {
        int temp = *(pArr + i);
        *(pArr + i) = *(pArr + j);
        *(pArr + j) = temp;
        i++;
        j--;
    }
}