// indexing of strings

#include <iostream>
#include <string>   // note
using namespace std;

int main() {
    string str1, str2;
    char ch;

    cout << str1[0] << " " << str1[1] << " " << str1[2] << endl;  // prints nothing
    str1 = "abcdefg";

    cout << str1[0] << " " << str1[1] << " " << str1[2] << endl; // prints a b c
    ch = str1[3];

    return 0;
}