// A program that reads the user's name and prints it in reverse order

#include <iostream>
#include <string>
using namespace std;

int main() {
    string userName;
    int index;

    cout << "Please enter your name: " << endl;
    getline(cin, userName);

    for (index = userName.length() - 1; index >= 0; index--) {  // starts with last character and loops backwards
        cout << userName[index];
    }
    cout << endl;

    return 0;
}