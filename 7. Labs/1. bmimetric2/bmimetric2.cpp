// A function to calculate BMI and display the CDC standard weight status categories 
// From 1. Introduction to Programming in C++/3. Labs
// From 2. Advanced Programming in C++/2. Labs
// The formula for BMI is Weight/Height^2
// Test weight 50, height 1.58 outputs 20.03 and normal

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// bmimetric: calculates BMI from weight and height in metric
// Input: int weight in kg and float height in m
// Output: float bmi
float bmimetricf(int w, float h);

int main() {
    int weight;
    float height;
    float bmi;
    string status;

    cout << "Please enter weight in kilograms: ";
    cin >> weight;
    cout << "Please enter height in meters: ";
    cin >> height;

    bmi = bmimetricf(weight, height);

    if (bmi < 18.5)
        status = "Underweight";
    else if (bmi >= 18.5 && bmi <= 24.9)
        status = "Normal";
    else if (bmi >= 25.0 && bmi <= 29.9)
        status = "Overweight";
    else if (bmi >= 30.0)
        status = "Obese";

    cout << "BMI is: " << std::fixed << std::setprecision(2) << bmi << ", Status is " << status << endl;

    return 0;
}

float bmimetricf(int w, float h) {
    float bmi = w / (h * h);

    return bmi;
}