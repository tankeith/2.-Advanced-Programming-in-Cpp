// Write a function to determine if a year is a leap year in the Gregorian calendar.
// The system is to check if an integer is divisble by 4 but not by 100 unless it is also divisible by 400
// For example, 1896, 1904 and 2000 were leap years but 1900 was not

// This program determines whether a user input year is a leap year
#include <iostream>
using namespace std;

// isleapyear: determines if a year is a leap year
// Input: 1 integer representing the year to be tested
// Output: true or false
bool isleapyear(int inyear);

int main() {
    int myBirthYear;
    
    cout << "Please enter the year you were born:\n";
    cin >> myBirthYear;

    if (isleapyear(myBirthYear) == true) 
        cout << myBirthYear << " was a leap year" << endl;
    else
        cout << myBirthYear << " was not leap year" << endl;
    
    return 0;
}

bool isleapyear(int inyear) {
    if (inyear % 4 != 0)
        return false;
    else if (inyear % 100 != 0)
        return true;
    else if (inyear % 400 != 0)
        return false;
    else
        return true;
}