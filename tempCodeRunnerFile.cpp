#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Prompt user to enter the amount of coffee
    double amount;
    cout << "Welcome to our coffee shop!" << endl;
    cout << "Please enter the amount of coffee you'd like to purchase: ";
    cin >> amount;

    // Assign price based on user's choice
    double pricePerCup;
    // Assuming a fixed price per cup
    pricePerCup = 2.50;

    // Calculate total price based on amount and price per cup
    double totalPrice = amount * pricePerCup;

    // Calculate GST (18%)
    double gst = 0.18 * totalPrice;

    // Calculate total amount including GST
    double totalAmount = totalPrice + gst;

    // Display the total amount including GST
    cout << fixed << setprecision(2);
    cout << "Price per cup: $" << pricePerCup << endl;
    cout << "Total Price (before GST): $" << totalPrice << endl;
    cout << "GST (18%): $" << gst << endl;
    cout << "Total amount (including GST): $" << totalAmount << endl;

    return 0;
}

