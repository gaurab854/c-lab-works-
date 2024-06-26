// Create a class Customer with attributes customer name, product bought and paid amount. Create suitable methods 
// to take and display the information with a clause that if amount paid is greater than 20000 then a discount 
// of 5% given else no discount is granted.

#include <iostream>
#include <string>
using namespace std;

class Customer {
private:
    string name;
    string productBought;
    double amountPaid;

public:
    // Setter method to initialize the customer data
    void setCustomerData(string n, string product, double amount) {
        name = n;
        productBought = product;
        amountPaid = amount;
    }

    
    double applyDiscount() {
        if (amountPaid > 20000) {
            return amountPaid * 0.95; // 
        }
        return amountPaid;
    }

    
    void display() const {
        cout << "Customer Name: " << name << endl;
        cout << "Product Bought: " << productBought << endl;
        if (amountPaid > 20000) {
            cout << "Original Amount Paid: " << amountPaid << endl;
            cout << "Discounted Amount Paid: " << amountPaid * 0.95 << endl;
        } else {
            cout << "Amount Paid: " << amountPaid << endl;
        }
    }
};

int main() {
    Customer customer;
    string name, product;
    double amount;

    
    cout << "Enter the customer's name: ";
    cin >> ws; 
    getline(cin, name);
    cout << "Enter the product bought: ";
    getline(cin, product);
    cout << "Enter the amount paid: ";
    cin >> amount;

    
    customer.setCustomerData(name, product, amount);


    cout << "\nCustomer Information:\n";
    customer.display();

    return 0;
}
