/***************************************************************
 * The program reads a left-justified file and creates a new *
 * right-justified file. *
 ***************************************************************/
#include <string>
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    // Declaration of files and a string object
    ifstream inputFile;
    ofstream outputFile;
    string line;
    // Read the input file just to find the maximum line size
    inputFile.open("inFile.dat");
    assert(inputFile);
    int maxSize = 0;
    while (!inputFile.eof())
    {
        getline(inputFile, line);
        if (line.size() > maxSize)
        {
            maxSize = line.size();
        }
    }
    inputFile.close();
    // Read the input file and create the output file.
    inputFile.open("inFile.dat");
    assert(inputFile);
    outputFile.open("outFile.dat");
    assert(outputFile);
    while (!inputFile.eof())
    {
        getline(inputFile, line);
        string temp(maxSize - line.size(), ' ');
        line.insert(0, temp);
        line.append("\n");
        outputFile << line;
    }
    inputFile.close();
    outputFile.close();
    return 0;
}