/***************************************************************
 * The program creates student average and test average from the *
 * two-dimensional test scores. *
 ***************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
/***************************************************************
 * The function takes a two-dimensional array of test scores *
 * for six students in three tests. It then modifies an array *
 * in main representing student average. *
 ***************************************************************/
void findStudentAverage(int const scores[][3],
                        double stdAver[], int rowSize, int colSize)
{
    for (int i = 0; i < rowSize; i++)
    {
        int sum = 0;
        for (int j = 0; j < colSize; j++)
        {
            sum += scores[i][j];
        }
        double average = static_cast<double>(sum) / colSize;
        stdAver[i] = average;
    }
    return;
}
/***************************************************************
 * The function takes a two-dimensional array of test scores *
 * for six students in three tests. It then modifies an array *
 * in main representing test averages. *
 ***************************************************************/
void findTestAverage(int const scores[][3],
                     double tstAver[], int rowSize, int colSize)
{
    for (int j = 0; j < colSize; j++)
    {
        int sum = 0;
        for (int i = 0; i < rowSize; i++)
        {
            sum += scores[i][j];
        }
        double average = static_cast<double>(sum) / rowSize;
        tstAver[j] = average;
    }
}
int main()
{
    // Declarations of three arrays and some variables
    const int rowSize = 5;
    const int colSize = 3;
    int scores[rowSize][colSize] = {{82, 65, 72},
                                    {73, 70, 80},
                                    {91, 67, 40},
                                    {72, 72, 68},
                                    {65, 90, 80}};
    double stdAver[rowSize];
    double tstAver[colSize];
    // Calling two functions to modify two average arrays
    findStudentAverage(scores, stdAver, rowSize, colSize);
    findTestAverage(scores, tstAver, rowSize, colSize);
    // Print headings
    cout << " Test Scores stdAver" << endl;
    cout << " ---------------------------------- " << endl;
    // Print test scores and student averages
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << setw(12) << scores[i][j];
        }
        cout << fixed << setprecision(2) << " " << stdAver[i] << endl;
    }
    // Print test averages
    cout << "tstAver ";
    cout << "--------------------------- ";
    for (int j = 0; j < colSize; j++)
    {
        cout << fixed << setprecision(2) << stdAver[j] << " ";
    }
    return 0;
}