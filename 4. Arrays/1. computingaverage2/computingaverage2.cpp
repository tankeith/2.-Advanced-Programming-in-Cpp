// Builds on computingaverage.cpp from 1. Introduction to Programming in C++/6. Iterative Statements
// Write a program that reads grades of students in a class, prints the average and the grades that are above the average
// Store the grades in a static array and run a second pass through them
// physically array has size 60, logically it has size 4
// Tests: 4 students, 71, 86, 68, 94, avg 79.75

#include <iostream>
using namespace std;

const int MAX_CLASS_SIZE = 60;

int main() {
    int numOfStudents;
    int gradesList[MAX_CLASS_SIZE];
    int currentGrade;
    int index, sum;
    double average;

    cout << "Please enter the number of students in the class (no more than " << MAX_CLASS_SIZE << "):\n";
    cin >> numOfStudents;

    // read the grades
    cout << "Enter the students' grades separated by a space:\n";
    for (index = 0; index < numOfStudents; index++) {               // note index < numOfStudents rather than <=. Same for loops below.
        cin >> currentGrade;
        gradesList[index] = currentGrade;
    }

    // calculate the average
    sum = 0;
    for (index = 0; index < numOfStudents; index++) {             
        sum += gradesList[index];
    }
    average = (double)sum / (double)numOfStudents;
    cout << "The class average is " << average << endl;

    // print grades above the average
    cout << "The grades above the average are " << average << endl;
    for (index = 0; index < numOfStudents; index++) {
        if (gradesList[index] > average) {
            cout << gradesList[index] << " ";
        }
    }
    cout << endl;
    return 0;
}
