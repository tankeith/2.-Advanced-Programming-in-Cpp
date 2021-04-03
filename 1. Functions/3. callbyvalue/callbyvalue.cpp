// Shows how when calling by value of variables, an attempt to swap the values of variables don't get passed to main
// 1. main a: 3, b: 4
// 2. swap a: 3, b: 4, temp: 3, return adrs: 5
// 3. swap a: 4, b: 3, temp: 3, return adrs: 5 <-- swap took place only in swap and not transfered to main
// 4. main a: 3, b: 4
// Before: a = 3 b = 4
// After: a = 3 b = 4

#include <iostream>
using namespace std;

void swap(int a, int b);

int main() {
    int a = 3, b = 4;

    cout << "Before: a = " << a << " b = " << b << endl;
    swap(a, b);
    cout << "After: a = " << a << " b = " << b << endl;

    return 0;
}

void swap(int a, int b) {
    int temp;

    temp = a;
    a = b;
    b = temp;
}