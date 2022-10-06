// ch5studentGradesWithFiles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    ofstream outputFile;
    outputFile.open("gradebook.txt");
    string response="y", name;
    int counter=0, numValues=0;
    double score1, score2, score3, average=0.0, totalAverage, value, total=0.0;
    cout << "Ch 5 Student Grades by Kevin Bell\n\n";
    while (response == "y" || response =="Y" || response == "Yes" || response == "YES" || response == "yes") {
        cout << "Enter student name: ";
        cin >> name;
        outputFile << name << endl;
        cout << "Enter three scores separated by a space: ";
        cin >> score1 >> score2 >> score3;
        counter++;
        average = (score1 + score2 + score3) / 3;
        outputFile << average << endl;
        cout << "Student's average is " << average << endl;
        cout << "Do you have another student to enter? (y/n) ";
        cin >> response;
    }
    outputFile.close();
    cout << "Done writing to file" << endl;
    cout << "Reading data from file" << endl;
    ifstream inputFile;
    inputFile.open("gradebook.txt");
    for (int count = 1; count <= counter; count++) {
        inputFile >> name;
        inputFile >> average;
        cout << "Student: " << name << ", avg: " << average << endl;
        total += average;
    }

    cout << "Done reading from file" << endl;
    cout << "Average for all student averages: " << setprecision(1) << fixed << (total/ counter) << endl;
    inputFile.close();
    system("pause");
    return 0;
}
