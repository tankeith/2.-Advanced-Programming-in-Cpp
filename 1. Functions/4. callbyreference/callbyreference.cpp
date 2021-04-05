// Shows how when calling by reference to the location of variables, an attempt to swap the values of variables works
// See difference in code in lines 13, 25: int&
// 1. main a: 3, b: 4
// 2. swap a: , b: , temp: , return adrs: 20 <-- we evaluate places/links/positions, the local variables pass references to a and b in main
// 3. swap a: refs main's a = 3, b: refs main's b = 4, temp: , return adrs: 20
// 4. swap a: 4, b: 3, temp: 3 <-- main's a will get value of main's b, and main's b will get value of temp
// Before: a = 3 b = 4
// After: a = 4 b = 3

#include <iostream>
using namespace std;

void swap(int& a, int& b);

int main() {
    int a = 3, b = 4;

    cout << "Before: a = " << a << " b = " << b << endl;
    swap(a, b);
    cout << "After: a = " << a << " b = " << b << endl;

    return 0;
}

void swap(int& a, int& b) {
    int temp;

    temp = a;
    a = b;
    b = temp;
}