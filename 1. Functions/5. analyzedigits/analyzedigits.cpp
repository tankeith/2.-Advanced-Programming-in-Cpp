// Rewrites printsnumsum using functions from 1. Introduction to Programming in C++/6. Iterative Statements/3. printsnumsum
// Write a program that reads a positive integer num, prints the number of digits in num and their sum
// Presents the challenge that any function analyzeDigits() can only return 1 value, while 2 are required (countDigits and sumDigits)
// Call by reference can be deployed to resolve this
// Solution: int analyzeDigits(int num, int& outSum),
// where sum is called by value and outSum is called by reference

#include <iostream>
using namespace std;

int analyzeDigits(int num, int& outSum);

int main() {
    int num;
    int countDigits, sumDigits;
    int currentDigit;

    cout << "Please enter a positive integer:\n";
    cin >> num;

    countDigits = analyzeDigits(num, sumDigits);

    cout << num << " has " << countDigits << " digits and their sum is " << sumDigits << endl;
    
    return 0;
}

int analyzeDigits(int num, int& outSum) {
    int count, sum;
    int currentDigit;

    count = 0;
    sum = 0;

    while (num > 0) {
        currentDigit = num % 10;
        count++;
        sum += currentDigit;
        num = num / 10;
    }
    outSum = sum;
    return count;
}
