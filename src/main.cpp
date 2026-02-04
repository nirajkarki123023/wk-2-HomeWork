#include <iostream>
#include <string>
using namespace std;

int main()
{
    string itemName;
    double price;
    int quantity;
    double subtotal;
    double tax;
    double total;
    const double TAX_RATE = 0.07;
    
    cout << "Enter item name: ";
    cin >> itemName;
    
    cout << "Enter price per item: ";
    cin >> price;
    
    cout << "Enter quantity: ";
    cin >> quantity;
    
    subtotal = price * quantity;
    tax = subtotal * TAX_RATE;
    total = subtotal + tax;
    
    cout << "\n----- RECEIPT -----\n";
    cout << "Item: " << itemName << endl;
    cout << "Price: $" << price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Tax (7%): $" << tax << endl;
    cout << "Total: $" << total << endl;
    cout << "-------------------\n";
    
    return 0;
}
