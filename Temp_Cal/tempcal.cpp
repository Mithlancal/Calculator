#include <iostream>
using namespace std;

int main() {
    int choice;
    double temp, result;

    while (true) {
        cout << "\n===== Temperature Converter =====\n";
        cout << "1. Celsius to Fahrenheit\n";
        cout << "2. Fahrenheit to Celsius\n";
        cout << "3. Celsius to Kelvin\n";
        cout << "4. Kelvin to Celsius\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Goodbye!\n";
            break;
        }

        cout << "Enter temperature: ";
        cin >> temp;

        switch (choice) {
            case 1:
                result = (temp * 9 / 5) + 32;
                cout << "Fahrenheit: " << result << endl;
                break;

            case 2:
                result = (temp - 32) * 5 / 9;
                cout << "Celsius: " << result << endl;
                break;

            case 3:
                result = temp + 273.15;
                cout << "Kelvin: " << result << endl;
                break;

            case 4:
                result = temp - 273.15;
                cout << "Celsius: " << result << endl;
                break;

            default:
                cout << "Invalid choice!\n";
        }
    }

    return 0;
}