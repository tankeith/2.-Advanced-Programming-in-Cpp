// Program that demonstrates how the run-time stack manages flow of program and variable scope
// Steps:
// 1. main n: 3 <-- 1st n
// 2. func n: , return adrs: <-- 2nd n
// 3. func n: 3, return adrs: 5
// 4. func n: 4, return adrs: 5
// 5. main: 3 <-- pops out of func and goes back to main
// 6. pop out of main

#include <iostream>
using namespace std;

void func(int n);

int main() {
    int n = 3;

    cout << "Before func: " << n << endl;
    func(n);
    cout << "After func: " << n << endl;
    
    return 0;
}

// void means this function doesn't return a value
void func(int n) {
    n = 4;

    cout << "Inside func: " << n << endl;
}