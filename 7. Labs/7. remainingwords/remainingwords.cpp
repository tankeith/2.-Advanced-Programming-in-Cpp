/*
Write a function that is given as a phrase and returns the first word in that phrase.
E.g., "the quick brown fox" should return "quick brown fox"
*/

#include <iostream>
#include <string>
using namespace std;

string remainingwords(string s);

int main() {
    string userInput;

    cout << "Enter phrase: " << endl;
    cin >> userInput;

    cout << remainingwords(userInput) << endl;

    return 0;
}

// assignment only requires submission of the below function:
string remainingwords(string s) {
    int blankIndex;
    int startIndex;
    string restOfPhrase;

    blankIndex = s.find(" ");  // search for the first blank
    startIndex = blankIndex + 1;

    restOfPhrase = s.substr(startIndex, s.length());  // get substring from first letter to the blank

    return restOfPhrase;
}