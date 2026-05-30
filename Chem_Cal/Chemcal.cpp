#include <iostream>
#include <iomanip>

using namespace std;

void molarityCalculator()
{
    double moles, liters;

    cout << "\n=== Molarity Calculator ===\n";
    cout << "Enter moles of solute: ";
    cin >> moles;

    cout << "Enter volume of solution (L): ";
    cin >> liters;

    if (liters <= 0)
    {
        cout << "Invalid volume!\n";
        return;
    }

    double molarity = moles / liters;

    cout << fixed << setprecision(4);
    cout << "Molarity = " << molarity << " M\n";
}

void molalityCalculator()
{
    double moles, kgSolvent;

    cout << "\n=== Molality Calculator ===\n";
    cout << "Enter moles of solute: ";
    cin >> moles;

    cout << "Enter mass of solvent (kg): ";
    cin >> kgSolvent;

    if (kgSolvent <= 0)
    {
        cout << "Invalid solvent mass!\n";
        return;
    }

    double molality = moles / kgSolvent;

    cout << fixed << setprecision(4);
    cout << "Molality = " << molality << " m\n";
}

void normalityCalculator()
{
    double equivalents, liters;

    cout << "\n=== Normality Calculator ===\n";
    cout << "Enter gram equivalents of solute: ";
    cin >> equivalents;

    cout << "Enter volume of solution (L): ";
    cin >> liters;

    if (liters <= 0)
    {
        cout << "Invalid volume!\n";
        return;
    }

    double normality = equivalents / liters;

    cout << fixed << setprecision(4);
    cout << "Normality = " << normality << " N\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== Chem_Cal =====\n";
        cout << "1. Molarity Calculator\n";
        cout << "2. Molality Calculator\n";
        cout << "3. Normality Calculator\n";
        cout << "0. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            molarityCalculator();
            break;

        case 2:
            molalityCalculator();
            break;

        case 3:
            normalityCalculator();
            break;

        case 0:
            cout << "Exiting Chem_Cal...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}