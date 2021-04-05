/* Solution 2: void analyzedDigits(int num, int& outSum, int& outCount)
where the function is a void and outSum and outCount are called by reference */

#include <iostream>
using namespace std;

void analyzeDigits(int num, int& outSum, int& outCount);

int main() {
    int num;
    int countDigits, sumDigits;

    cout << "Please enter a positive integer:\n";
    cin >> num;

    analyzeDigits(num, sumDigits, countDigits);  // Because outSum and outCount below are called by reference, sumDigits and countDigits will take whatever value is assigned locally to outSum and outCount in analyzeDigits()

    cout << num << " has " << countDigits << " digits and their sum is " << sumDigits << endl;
    
    return 0;
}

void analyzeDigits(int num, int& outSum, int& outCount) {
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
    outCount = count;
    // void function doesn't return a value
}