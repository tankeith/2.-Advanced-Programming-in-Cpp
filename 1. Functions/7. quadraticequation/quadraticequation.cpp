// This program solves a quadratic equation.
// Input from user: 3 real numbers representing the coefficients of a quadratic equation
// Output to user: The solutions of the equation, if there is any, or an appropriate message

#include <iostream>
#include <cmath> // for square root
using namespace std;

// constants to represent different cases of solutions
const int NO_SOLUTION = 0;
const int ONE_REAL_SOLUTION = 1;
const int TWO_REAL_SOLUTIONS = 2;
const int ALL_REALS = 3;
const int NO_REAL_SOLUTION = 4;

// quadratic: solves a quadratic equation: ax^2+bx+c=0
// Input: a, b, c -- coefficients of the equation
// Output: 1. type of solution (return value)
//         2. outX1, outX2 - solutions to equation (output parameters) called by reference. They're called output even though they're positionally inputs of the function
// Assumptions: 1. If the equation has one solution it will be returned in outX1
//              2. If the equation has no real solutions the values in outX1 and outX2 are not defined
int quadratic(double a, double b, double c, double& outX1, double& outX2);

// linear: solves a linear equation: ax+b=0
// Input: a, b -- coefficients of the equation
// Output: 1. type of solution (return value)
//         2. outX - solution to equation (output parameters) called by reference
// Assumption: If the equation has no solutions the value returned at outX is not defined
int linear (double a, double b, double& outX);

int main() {
    double a, b, c, x1, x2;

    cout << "Please enter the coefficients of a quadratic equation:\n";
    cin >> a >> b >> c;

    cout << "The equation: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;

    switch (quadratic(a, b, c, x1, x2)) {
        case TWO_REAL_SOLUTIONS:
            cout << "Solutions: " << x1 << " " << x2 << endl;
            break;
        case ONE_REAL_SOLUTION:
            cout << "One solution: " << x1 << endl;
            break;
        case NO_REAL_SOLUTION:
            cout << "No real solution" << endl;
            break;
        case NO_SOLUTION:
            cout << "No solutions" << endl;
            break;
        case ALL_REALS:
            cout << "All real numbers are solutions" << endl;
            break;
        default:
            cout << "Error" << endl;
            break;
    }
    return 0;
}

// quadratic has type int which returns the type of solution, and outX1 and outX2 for the values of the actual solutions
int quadratic(double a, double b, double c, double& outX1, double& outX2) {
    double delta, x1, x2;
    if (a != 0.0) {                         // if a is not 0
        delta = b*b - 4*a*c;                // delta is b^2 - 4ac
        if (delta > 0) {                    // delta is positive
            x1 = (-b + sqrt(delta))/(2*a);  
            x2 = (-b - sqrt(delta))/(2*a);
            outX1 = x1;
            outX2 = x2;
            return TWO_REAL_SOLUTIONS;
        }
        else if (delta == 0) {              //
            x1 = -b/(2*a);
            outX1 = x1;
            return ONE_REAL_SOLUTION;
        }
        else
            return NO_REAL_SOLUTION;
    }
    else
        return linear(b, c, outX1);         // if a = 0, equation is linear
} 
    
int linear (double a, double b, double& outX) {
    double x;
    if (a != 0) {
        x = -b/a;
        outX = x;
        return ONE_REAL_SOLUTION;
    }
    else if ((a == 0) && (b == 0)) {
        x = 0;
        outX = x;
        return ALL_REALS;
    }
    else // in this case a == 0 && b != 0
        return NO_SOLUTION;
}

// Test input and output
// Please enter the coefficients of the quadratic equation:
// 1 -5 -14
// The equation: 1x^2 + -5x + -14 = 0
// Solutions: 7 -2

// 1 -11 28
// The equation: 1x^2 + -11x + 28 = 0
// Solutions: 7 4

// 6 -1 -5
// The equation: 6x^2 + -1x + -5 = 0
// Solutions: 1 -0.833333

// 12 -25 0
// The equation: 12x^2 + -25x + 0 = 0
// Solutions: 2.08333 0