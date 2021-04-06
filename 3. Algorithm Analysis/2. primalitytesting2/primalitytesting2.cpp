// A program that determines whether a number is prime or not
// Version 2: iterates through all numbers from 1 through num/2 (first half of the range)
// because the only divisors in the second half of the range is num itself

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
    for (int i = 1; i <= num/2; i++) {  // num/2
        if (num % i == 0)
            countDivs++;
    }
    if (countDivs == 1)                 // will only have 1
        return true;
    else
        return false;
}