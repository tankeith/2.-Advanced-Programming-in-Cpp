// A program that determines whether a number is prime or not
// Version 1: iterates through all numbers from 1 through num

#include <iostream>
using namespace std;

// isPrime: counts the number of divisors a number has by iterating from 1 through itself
//          if the number of divisors is 2, then it is prime
// Input: int num
// Output: true or false
bool isPrime(int num);

int main() {


    return 0;
}

bool isPrime(int num) {
    int countDivs = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0)
            countDivs++;
    }
    if (countDivs == 2)
        return true;
    else
        return false;
}