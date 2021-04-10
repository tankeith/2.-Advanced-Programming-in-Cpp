/*
Write a function that is given as a phrase and returns the first word in that phrase.
E.g., "the quick brown fox" should return "the"
*/

#include <iostream>
#include <string>
using namespace std;

string firstword(string s);

int main() {
    string userInput;

    cout << "Enter phrase: " << endl;
    cin >> userInput;

    cout << firstword(userInput) << endl;

    return 0;
}

// assignment only requires submission of the below function:
string firstword(string s) {
    int blankIndex;
    string wordOne;

    blankIndex = s.find(" ");  // search for the first blank

    wordOne = s.substr(0, blankIndex);  // get substring from first letter to the blank

    return wordOne;
}