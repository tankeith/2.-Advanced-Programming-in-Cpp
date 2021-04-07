// A program that determines whether a number is prime or not
// Version 1: iterates through all numbers from 1 through num
// T(n) = 5n + 4 = theta(n)

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

// T(n) = 5n + 4
bool isPrime(int num) {
    int countDivs = 0;                  // = (1)
    for (int i = 1; i <= num; i++) {    // = (1)
        if (num % i == 0)               // i <= num (1) i++ (1) num % 1 (1) == 0 (1) countDivs++ (1)   
            countDivs++;                // above 5 steps are repeated n times depending on size of num, hence 5n 
    }
    if (countDivs == 2)                 // == (1)
        return true;                    // return (1) (not 2 because it's either T or F) 
    else
        return false;
}