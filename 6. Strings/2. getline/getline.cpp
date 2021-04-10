// reads user input strings separated by a space using getline
// if we use cin we only get the first word as whitespace is seen as terminating character

#include <iostream>
#include <string>   // note
using namespace std;

int main() {
    string str;

    cout << "Please enter your name" << endl;
    // cin >> str;                              // cin way would only return Donald out of Donald Duck
    getline(cin, str);                          // reads an entire line into str

    cout << str << endl;

    return 0;
}