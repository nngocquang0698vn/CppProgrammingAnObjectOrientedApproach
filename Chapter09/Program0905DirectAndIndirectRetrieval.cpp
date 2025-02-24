/***************************************************************
 * The program shows how to access (retrieve or change) the value *
 * of a data variable both directly and indirectly. *
 ***************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Declaration and initialization of variables
    int score = 92;
    int *pScore = &score;
    // Retrieving value of data variable directly and indirectly
    cout << "Direct retrieve of score: " << score << endl;
    cout << "Indirect retrieve of score: " << *pScore;
    return 0;
}