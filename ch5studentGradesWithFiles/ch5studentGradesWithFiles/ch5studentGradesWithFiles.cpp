// ch5studentGradesWithFiles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    string response="y", name;
    double score1, score2, score3, average;
    cout << "Ch 5 Student Grades by Kevin Bell\n\n";
    while (response == "y" || response =="Y" || response == "Yes" || response == "YES" || response == "yes") {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter three scores separated by a space: ";
        cin >> score1 >> score2 >> score3;
        average = (score1 + score2 + score3) / 3;
        cout << "Student's average is " << average << endl;
        cout << "Do you have another student to enter? (y/n) ";
        cin >> response;
    }
    system("pause");
    return 0;
}
