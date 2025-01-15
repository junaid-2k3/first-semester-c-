#include <iostream>

using namespace std;

class PhonePayments {
private:
	
    double phonePrice;
    double monthlyPayment;
    int totalMonths;
    double remainingAmount;

public:
	
    PhonePayments(double price) {
        phonePrice = price;
        monthlyPayment = 0.2 * phonePrice;
        totalMonths = 0;
        remainingAmount = phonePrice;
    }

    void makePayment(bool Paid) {
        if (Paid) {
            remainingAmount -= monthlyPayment;
        	} else {
            remainingAmount += 0.02 * remainingAmount;
        }
        totalMonths++;
    }

    void showInstallments() {
        if (remainingAmount <= 0) {
            cout << "\nYou have successfully submitted all your installments.\n";
            cout << "Total months taken: " << totalMonths << endl;
        	} else {
            cout << "\nRemaining amount: " << remainingAmount << endl;
        }
    }

    bool isPaid() {
        return remainingAmount <= 0;
    }
};

int main() {
    double price;
    cout << "\n------------------------------------------------------\n";
    cout << "  Phone Payment system \n";
    cout << "------------------------------------------------------\n";
    cout << "\nEnter the price of the phone: ";
    cin >> price;

    PhonePayments phone(price);

while (!phone.isPaid()) {
        cout << "\nDid you pay on time this month? (y/n): ";
        char input;
        cin >> input;

        bool Paid = (input == 'y' || input == 'Y');
        phone.makePayment(Paid);

        phone.showInstallments();
    }

    cout << "\n------------------------------------------------------\n";
    cout << "  Payment Completed  \n";
    cout << "------------------------------------------------------\n";

    return 0;
}
