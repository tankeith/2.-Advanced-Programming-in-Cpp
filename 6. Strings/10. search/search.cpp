// A program that reads from the user 3 words and prints the one that comes first in the alphabet
// find(s, startInd) method

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "abcdbcdefg";
    
    cout << str.find("de") << endl;  // returns 6
    
    if (str.find("xyz") == string::npos)
        cout << "Not found" << endl;  // prints Not found
    else
        cout << "Found" << endl;
    
    cout << str.find("cd") << endl;  // prints 2, which is the index of the first occurrence of cd
    cout << str.find("cd", 3) << endl; // prints 5, as the search started from index 3

    return 0;
}