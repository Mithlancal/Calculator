#include <iostream>
#include <iomanip>



using namespace std;

int main() {
    float weight, height, bmi;

    cout << "===== BMI Calculator =====\n";

    cout << "Enter weight (kg): ";
    cin >> weight;

    cout << "Enter height (meters): ";
    cin >> height;

    bmi = weight / (height * height);

    cout << fixed << setprecision(1);
    cout << "\nYour BMI is: " << bmi << endl;


    if (bmi < 18.5) {
        cout << "Category: Underweight\n";
        cout << "Remark: You may need better nutrition.\n";
        cout << "Suggestion: Eat healthy meals and consult a doctor if needed.\n";
    }
    else if (bmi < 25) {
        cout << "Category: Normal Weight\n";
        cout << "Remark: Great! Your weight is healthy.\n";
        cout << "Suggestion: Maintain your lifestyle and stay active.\n";
    }
    else if (bmi < 30) {
        cout << "Category: Overweight\n";
        cout << "Remark: You may have extra body weight.\n";
        cout << "Suggestion: Exercise regularly and improve diet habits.\n";
    }
    else {
        cout << "Category: Obese\n";
        cout << "Remark: Your health risk may be higher.\n";
        cout << "Suggestion: Consult a healthcare professional and start a fitness plan.\n";
    }

    cout << "\nThank you for using BMI Calculator!\n";

    return 0;
}