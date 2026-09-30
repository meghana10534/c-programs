#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Writing to a file
    ofstream outFile("student.txt");

    outFile << "Name: Meghana" << endl;
    outFile << "Roll No: 101" << endl;
    outFile << "Course: AIML" << endl;

    outFile.close();

    // Reading from the file
    ifstream inFile("student.txt");

    string line;
    cout << "File Contents:" << endl;

    while (getline(inFile, line))
    {
        cout << line << endl;
    }

    inFile.close();

    return 0;
}
