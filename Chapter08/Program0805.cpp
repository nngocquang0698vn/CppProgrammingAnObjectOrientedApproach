/***************************************************************
 * Use of an array to read a list of integers from a file and *
 * prints the sum, the average, the smallest, and largest of *
 * the numbers in the file. *
 ***************************************************************/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // File declaration
    ifstream inputFile;
    // Array and variable declarations
    const int CAPACITY = 50;
    int numbers[CAPACITY];
    int size = 0;
    // Initialization
    int sum = 0;
    double average;
    int smallest = 1000000;
    int largest = -1000000;
    // Opening input file with opening validation
    inputFile.open("numFile.dat");
    if (!inputFile)
    {
        cout << "Error. Input file cannot be opened." << endl;
        cout << "The program is terminated.";
        return 0;
    }
    // Reading (copying) numbers from the file
    while (inputFile >> numbers[size])
    {
        size++;
    }
    // Closing input file
    inputFile.close();
    // Finding sum, average, smallest, and the largest
    for (int i = 0; i < size; i++)
    {
        sum += numbers[i];
        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }
    average = static_cast<double>(sum) / size;
    // Printing results
    cout << "There are " << size << " numbers in the list" << endl;
    cout << "The sum of them is: " << sum << endl;
    cout << "The average of them is: " << average << endl;
    cout << "The smallest number is: " << smallest << endl;
    cout << "The largest number is: " << largest << endl;
    return 0;
}