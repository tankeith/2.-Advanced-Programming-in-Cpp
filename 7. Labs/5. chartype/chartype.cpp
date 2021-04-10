/*
Read a character (string of length 1) from the user and classify it to one of:
- a lower case letter
- an upper case letter
- a digit
- a non-alphanumeric character
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string userInput;

    cout << "Enter a character: ";
    cin >> userInput;

    if (userInput >= "a" && userInput <= "z")
        cout << userInput << " is a lower case letter." << endl;
    else if (userInput >= "A" && userInput <= "Z")
        cout << userInput << " is an upper case letter." << endl;
    else if (userInput >= "0" && userInput <= "9")
        cout << userInput << " is a digit." << endl;
    else
        cout << userInput << " is a non-alphanumeric character." << endl;

    return 0;
}