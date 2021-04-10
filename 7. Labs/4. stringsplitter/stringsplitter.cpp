/*
Read a string from the user containing an odd number of characters
a) Print the middle character
b) Print the string up to but not including the middle character
c) Print the string from the middle of the character to the end (not including the middle char)
Test: Fortune favors the bold. Middle: -, First half: Fortune fav, Second half: rs the bold
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string userInput;
    int middleIndex;
    string firstHalf, secondHalf;

    cout << "Enter an odd length string: ";
    getline(cin, userInput);

    middleIndex = userInput.length() / 2;

    firstHalf = userInput.substr(0, middleIndex);
    secondHalf = userInput.substr(middleIndex + 1, userInput.length() - 1);

    cout << "Middle character: " << userInput[middleIndex] << endl;
    cout << "First half: " << firstHalf << endl;
    cout << "Second half: " << secondHalf << endl;

    return 0;
}