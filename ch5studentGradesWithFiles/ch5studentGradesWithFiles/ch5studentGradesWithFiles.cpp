// ch5studentGradesWithFiles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    string response="y", name;
    double score, average;
    cout << "Ch 5 Student Grades by Kevin Bell\n\n";
    while (response == "y") {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter three scores separated by a space: ";
        cin >> score;
        cout << "Student's average is " << average << endl;

    }
}
