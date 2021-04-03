// Write a program that reads from the user two positive integers n, k (where n >= k),
// and prints the value of n choose k.
// n choose k = (n!) / (k!)(n-k)!

#include <iostream>
using namespace std;

int factorial (int num) {
    int factRes, i;

    factRes = 1;
    for (i = 1; i <= num; i++)
        factRes *= i;

    return factRes;
}

int main() {
    int n, k, k_combinations;
    int nFact, kFact, n_kFact; // nFact = n factorial, n_kFact = n minus k factorial

    cout << "Please enter n and k (n >= k):\n";
    cin >> n >> k;

    // the factorial calculation in the 3 chunks below has been defined separately in a factorial function below

    // n!
    nFact = factorial(n);
    // nFact = 1;
    // for (i = 1; i <= n; i++)
    //     nFact *= i;

    // k!
    kFact = factorial(k);
    // kFact = 1;
    // for (i = 1; i <= k; i++)
    //     kFact *= i;
    
    // (n-k)!
    n_kFact = factorial(n-k);
    // n_kFact = 1;
    // for (i = 1; i <= n-k; i++)
    //     n_kFact *= i;

    // k-combinations
    k_combinations = nFact / (kFact * n_kFact); // no need to use double because both are integer values

    cout << n << " choose " << k << " is " << k_combinations << endl;

    return 0;
}