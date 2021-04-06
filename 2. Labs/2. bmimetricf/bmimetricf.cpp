// A function to calculate BMI. From 1. Introduction to Programming in C++/3. Labs
// The formula for BMI is Weight/Height^2

#include <iostream>
#include <iomanip>
using namespace std;

// bmimetric: calculates BMI from weight and height in metric
// Input: int weight in kg and float height in m
// Output: float bmi
float bmimetricf(int w, float h);

int main() {
    int weight;
    float height;

    cout << "Please enter weight in kilograms: ";
    cin >> weight;
    cout << "Please enter height in meters: ";
    cin >> height;

    cout << "BMI is: " << std::fixed << std::setprecision(2) << bmimetricf(weight, height) << endl;

    return 0;
}

float bmimetricf(int w, float h) {
    return w / (h * h);    
}