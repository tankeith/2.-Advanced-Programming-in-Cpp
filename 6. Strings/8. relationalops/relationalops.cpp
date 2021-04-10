// Compares strings for alphabetical order in terms of their ASCII problem
// Program will iterate through each letter of string and starts comparing when they differ

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    
    str1 = "abc";
    str2 = "de";

    if (str1 < str2)
        cout << str1 << " is smaller than " << str2 << endl;  // this gets printed
    else
        cout << str1 << " is not smaller than " << str2 << endl;

    return 0;
}