// Write a program that reads from the user two positive integers n, k (where n >= k),
// and prints the value of n choose k.
// n choose k = (n!) / (k!)(n-k)!

#include <iostream>
using namespace std;

int factorial (int num); // declares factorial function containing header of the function before main
int kCombinations(int n, int k);

int main() {
    int n, k, k_comb;

    cout << "Please enter n and k (n >= k):\n";
    cin >> n >> k;

    k_comb = kCombinations(n, k);

    cout << n << " choose " << k << " is " << k_comb << endl;

    return 0;
}

int kCombinations(int n, int k) {
    int nFact, kFact, n_kFact; // nFact = n factorial, n_kFact = n minus k factorial
    
    nFact = factorial(n);
    kFact = factorial(k);
    n_kFact = factorial(n-k);

    return (nFact / (kFact * n_kFact)); // didn't need to have been declared as double because both are integer values
}

int factorial (int num) {
    int factRes, i;

    factRes = 1;
    for (i = 1; i <= num; i++)
        factRes *= i;

    return factRes; // returned rather than printed using cout
}