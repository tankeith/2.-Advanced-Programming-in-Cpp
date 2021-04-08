// Runtime analysis of nested loop

#include <iostream>
using namespace std;

int main() {
    int n, i, j;

    cout << "Please enter n:\n";
    cin >> n;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++)    // j through i this time, rather than j through n in example 1
            cout << '*';
        cout << endl;
    }
    return 0;
}

/*
Code prints * and breaks line
*
**
***
****

What's the runtime of this function?
Start counting from inner loop to outer
inner loop: lines 13-15 --> we can't say that we're doing the exact same thing in each iteration,
                            as we're printing a different number of * each time
                            The number of iterations we're doing varies from iteration to iteration
                            For each iteration, we're doing the theta of i (rather than n) operations
outer loop: lines 12-16 --> [...]
T(n)= 1 + 2 + 3 + ... + n
    = n(n+1)/2
    = (1/2) * n^2 + (1/2) * n
    = n^2  (after dropping the 1/2 and 1/2)

Intuitively we can also tell it from the triangle, which is half of n^2, ie half of the square
*/