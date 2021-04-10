// slicing of strings using the method substr(starting_index, length)

#include <iostream>
#include <string>   // note
using namespace std;

int main() {
    string str1, str2;
    char ch;

    str1 = "abcdefg";
    cout << str1[0] << " " << str1[1] << " " << str1[2] << endl; // prints a b c
        
    ch = str1[3];

    cout << str1.substr(3, 2) << endl;      // starts at index 3 for length 2. prints de 
    
    str2 = str1.substr(2, 3);               // assigns substr into a string variable
    cout << str2 << endl;                   // prints cde

    return 0;
}