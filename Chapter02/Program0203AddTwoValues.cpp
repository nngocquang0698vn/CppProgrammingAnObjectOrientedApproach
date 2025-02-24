/***************************************************************
 * This program gets the values for two numbers from the keyboard, *
 * adds them together and prints the result on the monitor. *
 ***************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Definition
    int num1;
    int num2;
    int sum;
    // Getting inputs
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    // Calculation and storing result
    sum = num1 + num2;
    // Display output
    cout << "The sum is: " << sum;
    return 0;
}