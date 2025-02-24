/***************************************************************
 * The program shows how to declare and initialize the original *
 * and reference variables and then access the common value *
 * through either of them. *
 ***************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // Creation of reference relations
    int score = 92;
    int &rScore = score;
    // Using data variable
    cout << "Accessing value through data variable." << endl;
    cout << "score: " << score << endl;
    // Using reference variable
    cout << "Accessing value through reference variable." << endl;
    cout << "rScore: " << rScore;
    return 0;
}