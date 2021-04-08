// Runtime analysis of nested loop

#include <iostream>
using namespace std;

int main() {
    int n, i, j;

    cout << "Please enter n:\n";
    cin >> n;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++)
            cout << '*';
        cout << endl;
    }
    return 0;
}

/*
Code prints * and breaks line
****
****
****
****

What's the runtime of this function?
Start counting from inner loop to outer
inner loop: lines 13-15 --> these do n operations each time
outer loop: lines 12-16 --> these do n*n operations, ie n^2
T(n)=n^2
*/