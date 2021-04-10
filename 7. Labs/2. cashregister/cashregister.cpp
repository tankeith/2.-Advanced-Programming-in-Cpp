/*
This program computes how much a customer has to pay after buying two items
The price is calculated according to these rules:
- buy one get one half off promotion. the lower-priced item is half price
- if customer is club card member, additional 10% off
- tax is added
Inputs from user: 
1. prices of 2 items
2. club card or not Y or y for yes, N or n for no
3. tax rate
Outputs:
1. Base price - the price before the discounts and taxes
2. Price after discounts - after promotion and member's discount
3. Total price - what the customer has to pay rounded to 2 decimal places
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const double HALF_PRICE = 0.5;
const double CLUB_DISCOUNT = 0.9;

int main() {
    double item1, item2;
    char clubCard;
    double tax;
    double basePrice, discountedPrice, totalPrice;

    // Get various user inputs
    cout << "Enter price of the first item: ";
    cin >> item1;
    cout << "Enter price of the second item: ";
    cin >> item2;

    cout << "Does customer have a club card? (Y/N): ";
    cin >> clubCard;

    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin >> tax;

    // Calculate base price
    basePrice = item1 + item2;

    // Calculate price after discounts
    if (item1 < item2)
        discountedPrice = (item1 * HALF_PRICE) + item2;
    else
        discountedPrice = (item2 * HALF_PRICE) + item1;
    
    if (clubCard == 'y' || clubCard == 'Y')
        discountedPrice = discountedPrice * CLUB_DISCOUNT;

    // Calculate total price by adding tax
    totalPrice = discountedPrice * (tax / 100 + 1);
  
    // Prints output
    cout << "Base price = " << std::fixed << std::setprecision(2) << basePrice << endl;
    cout << "Price after discounts = " << std::fixed << std::setprecision(2) << discountedPrice << endl;
    cout << "Total price = " << std::fixed << std::setprecision(2) << totalPrice << endl;

    return 0;
}
