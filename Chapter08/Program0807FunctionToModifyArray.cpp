/***************************************************************
 * Passing array name and size to a function to let it modify *
 * the elements of the array *
 ***************************************************************/
#include <iostream>
using namespace std;
/***************************************************************
 * Function multiplyByTwo is a modifying function that changes *
 * the array in main. There is no const modifier here. *
 * The function accesses the array in main and modifies it. *
 ***************************************************************/
void multiplyByTwo(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        numbers[i] *= 2;
    }
    return;
}

/***************************************************************
 * Function print accepts the name and the size of an array. *
 * The function then prints the elements of the array created *
 * and initialized in main. It does not modify the array. *
 ***************************************************************/
void print(const int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << "  ";
    }
    cout << endl;
    return;
}

int main()
{
    // Declaration and initialization of an array
    int numbers[5] = {150, 170, 190, 110, 130};
    // Printing the array before being modified
    print(numbers, 5);
    // Modifying the array in multiplyByTwo function
    multiplyByTwo(numbers, 5);
    // Printing the array after being modified
    print(numbers, 5);
    return 0;
}