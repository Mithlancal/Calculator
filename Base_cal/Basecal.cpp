#include <iostream>
using namespace std;

int main() {
    int num, choice;

    cout << "Enter decimal number: ";
    cin >> num;

    cout << "1. Binary\n";
    cout << "2. Octal\n";
    cout << "3. Hexadecimal\n";
    cout << "Choose conversion: ";
    cin >> choice;

    if (choice == 1) {
        int binary[32], i = 0;

        while (num > 0) {
            binary[i] = num % 2;
            num /= 2;
            i++;
        }

        cout << "Binary: ";

        for (int j = i - 1; j >= 0; j--) {
            cout << binary[j];
        }
    }

    else if (choice == 2) {
        int octal[32], i = 0;

        while (num > 0) {
            octal[i] = num % 8;
            num /= 8;
            i++;
        }

        cout << "Octal: ";

        for (int j = i - 1; j >= 0; j--) {
            cout << octal[j];
        }
    }

    else if (choice == 3) {
        char hex[32];
        int i = 0;

        while (num > 0) {
            int rem = num % 16;

            if (rem < 10)
                hex[i] = rem + 48;
            else
                hex[i] = rem + 55;

            num /= 16;
            i++;
        }

        cout << "Hexadecimal: ";

        for (int j = i - 1; j >= 0; j--) {
            cout << hex[j];
        }
    }

    return 0;
}