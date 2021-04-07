/* 
A program that determines whether a number is prime or not
Version 3: iterates through all numbers from 1 through sqrt num
Based on what we know of complementary divisors,
the hypothesis is that if there are no divisors in the start of the range from 1 to sqrt num,
then there won't be any in the latter part of the range
Proof by contradiction:
    1. Let k and d be complementary divisors of num, and assume that they're both greater than sqrt num
    2. We therefore have: num = k*d > sqrt num. 
    3. Given that k > sqrt num and d > sqrt num, so k*d > num
    4. This implies that num > num, which is a contradiction
    5. So our initial assumption that both k and d are both > num is false, and implies that one must be < num 
T(n) = 6sqrt(n) + 4 = theta(sqrt(n))
*/

#include <iostream>
#include <cmath>
using namespace std;

// isPrime: counts the number of divisors a number has by iterating from 1 through its square root
//          if the number of divisors is 1, then it is prime
// Input: int num
// Output: true or false
bool isPrime(int num);

int main() {


    return 0;
}

// T(n) = 6 * sqrt(n) + 4
bool isPrime(int num) {
    int countDivs = 0;                                          // = (1)
    for (int i = 1; i <= sqrt(num); i++) {  // num/2            // = (1)
        if (num % i == 0)                                       // <= (1) sqrt (1) ++ (1) % (1) == (1) ++ (1)
            countDivs++;
    }
    if (countDivs == 1)                 // will only have 1     // == (1)
        return true;                                            // return (1)
    else
        return false;
}