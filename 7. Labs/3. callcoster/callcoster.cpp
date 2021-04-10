/* 
A program that computes the cost of a long-distance call, based on the following rate schedule:
- any call starting between 8 am and 6 pm, Mon-Fri costs $0.40/min
- any call starting before 8 am or after 6 pm, Mon-Fri costs $0.25/min
- any call starting Sat-Sun costs $0.15/min
Input: day, time, duration in mins
Output: cost of call
Tests: Fri, 2350, 22, output 5.50
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const double WEEKDAY_PEAK_RATE = 0.40;
const double WEEKDAY_OFFPEAK_RATE = 0.25;
const double WEEKEND_RATE = 0.15;

int main() {
    string day, time;  // Even though time is entered in numerals, we can't read it into an int because some will start with 0, leading to an error
    double duration;
    double cost;

    // Get user inputs
    cout << "Enter the day the call started at: ";
    cin >> day;
    cout << "Enter the time the call started at (hhmm): ";
    cin >> time;
    cout << "Enter the duration of the call (in minutes): ";
    cin >> duration;

    // Calculate call cost
    // Identify clear cut cases where weekend rates are applicable
    if (day == "Sat" || day == "Sun")
        cost = duration * WEEKEND_RATE;
    // Identify the two hours that start with '0' and '8' and '9' 
    else if
        ((time[0] == '0' && (time[1] == '8' || time[1] == '9')) || // 8 or 9 am
        (time[0] == '1' && time[1] != '9')) { // 10 am to 6 pm
            if ((time [0] == '1' && time[1] == '8') && (time[2] == '0' && time[3] == '0')) {
                cost = duration * WEEKDAY_PEAK_RATE;
            }
        }
    else
        cost = duration * WEEKDAY_OFFPEAK_RATE;
    
    cout << "This call will cost $" << std::fixed << std::setprecision(2) << cost << endl;

    return 0;
}