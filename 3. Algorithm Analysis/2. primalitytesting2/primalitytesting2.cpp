// A program that determines whether a number is prime or not
// Version 2: iterates through all numbers from 1 through num/2 (first half of the range)
// because the only divisors in the second half of the range is num itself
// T(n) = 3n + 4 = theta(n)

#include <iostream>
using namespace std;

// isPrime: counts the number of divisors a number has by iterating from 1 through itself/2
//          if the number of divisors is 1, then it is prime
// Input: int num
// Output: true or false
bool isPrime(int num);

int main() {


    return 0;
}

// T(n) = 6(n/2) + 4 = 3n + 4
bool isPrime(int num) {
    int countDivs = 0;                                          // = (1)
    for (int i = 1; i <= num/2; i++) {  // num/2                // = (1)
        if (num % i == 0)                                       // i <= (1) num/2 (1) ++ (1) % (1) == (1) ++ (1)
            countDivs++;
    }
    if (countDivs == 1)                 // will only have 1     // == (1)
        return true;                                            // return (1)
    else
        return false;
}