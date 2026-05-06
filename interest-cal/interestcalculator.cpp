#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Function for Simple Interest
void calculateSI() {
    double principal, rate, time;
    
    cout << "\n--- Simple Interest Calculator ---\n";
    cout << "Enter Principal Amount: ";
    cin >> principal;
    cout << "Enter Rate of Interest (% per annum): ";
    cin >> rate;
    cout << "Enter Time (in years): ";
    cin >> time;

    double interest = (principal * rate * time) / 100.0;
    double amount = principal + interest;

    cout << fixed << setprecision(2);
    cout << "\nPrincipal Amount : " << principal << endl;
    cout << "Interest Earned  : " << interest << endl;
    cout << "Total Amount     : " << amount << endl;
}

// Function for Compound Interest
void calculateCI() {
    double principal, rate, time;
    int n;

    cout << "\n--- Compound Interest Calculator ---\n";
    cout << "Enter Principal Amount: ";
    cin >> principal;
    cout << "Enter Rate of Interest (% per annum): ";
    cin >> rate;
    cout << "Enter Time (in years): ";
    cin >> time;
    cout << "Enter number of times interest is compounded per year: ";
    cin >> n;

    double amount = principal * pow((1 + rate / (100.0 * n)), n * time);
    double interest = amount - principal;

    cout << fixed << setprecision(2);
    cout << "\nPrincipal Amount : " << principal << endl;
    cout << "Interest Earned  : " << interest << endl;
    cout << "Total Amount     : " << amount << endl;
}

int main() {
    int choice;
    char again;

    do {
        cout << "\n========== Interest Calculator ==========\n";
        cout << "1. Simple Interest\n";
        cout << "2. Compound Interest\n";
        cout << "Enter your choice (1 or 2): ";
        cin >> choice;

        switch (choice) {
            case 1:
                calculateSI();
                break;
            case 2:
                calculateCI();
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }

        cout << "\nDo you want to calculate again? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "\nThank you for using the calculator!\n";
    return 0;
}