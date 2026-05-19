#include <iostream>
#include <cctype>   // for toupper()
using namespace std;

int main()
{
    char choice;

    do
    {
        int option;

        cout << "\n===== UNIT CONVERSION CALCULATOR =====\n";
        cout << "1. Length Conversion\n";
        cout << "2. Height Conversion\n";
        cout << "3. Weight Conversion\n";
        cout << "4. Volume Conversion\n";
        cout << "5. Speed Conversion\n";
        cout << "6. Time Conversion\n";
        cout << "Enter your choice: ";
        cin >> option;

        switch(option)
        {
            case 1:
            {
                double meter;
                cout << "\nEnter length in meters: ";
                cin >> meter;

                cout << "Length in centimeters = " << meter * 100 << " cm\n";
                cout << "Length in kilometers = " << meter / 1000 << " km\n";
                break;
            }

            case 2:
            {
                double cm;
                cout << "\nEnter height in centimeters: ";
                cin >> cm;

                cout << "Height in meters = " << cm / 100 << " m\n";
                cout << "Height in feet = " << cm / 30.48 << " ft\n";
                break;
            }

            case 3:
            {
                double kg;
                cout << "\nEnter weight in kilograms: ";
                cin >> kg;

                cout << "Weight in grams = " << kg * 1000 << " g\n";
                cout << "Weight in pounds = " << kg * 2.20462 << " lbs\n";
                break;
            }

            case 4:
            {
                double liter;
                cout << "\nEnter volume in liters: ";
                cin >> liter;

                cout << "Volume in milliliters = " << liter * 1000 << " mL\n";
                break;
            }

            case 5:
            {
                double kmh;
                cout << "\nEnter speed in km/h: ";
                cin >> kmh;

                cout << "Speed in m/s = " << kmh * 0.2778 << " m/s\n";
                break;
            }

            case 6:
            {
                double hours;
                cout << "\nEnter time in hours: ";
                cin >> hours;

                cout << "Time in minutes = " << hours * 60 << " min\n";
                cout << "Time in seconds = " << hours * 3600 << " sec\n";
                break;
            }

            default:
                cout << "\nInvalid choice!\n";
        }

        cout << "\nDo you want to continue? (Y/N): ";
        cin >> choice;

        choice = toupper(choice);

    } while(choice == 'Y');

    cout << "\nProgram Ended.\n";

    return 0;
}