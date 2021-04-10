// A program that reads from the user 3 words and prints the one that comes first in the alphabet


#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2, str3;
    
    cout << "Please enter three words separated by a space: \n";
    cin >> str1 >> str2 >> str3;

    if (str1 <= str2 && str1 <= str3)
        cout << str1 << endl;
    else if (str2 <= str1 && str2 <= str3)
        cout << str2 << endl;
    else
        cout << str3 << endl;
        
    return 0;
}