#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int mainChoice, shapeChoice;
    char cont;
    do {
        cout << "Choose:\n1. Area\n2. Volume\nEnter choice: ";
        cin >> mainChoice;

        if(mainChoice == 1) {
            cout << "\n--- Area Calculator ---\n";
            cout << "Shapes:\n1. Circle\n2. Rectangle\n3. Square\n4. Sector\n5. Cube (TSA/LSA)\n6. Cuboid (TSA/LSA)\n7. Cylinder (TSA/CSA)\n8. Sphere\nEnter shape: ";
            cin >> shapeChoice;
            switch(shapeChoice) {
                case 1: {
                    double r; cout << "Radius: "; cin >> r;
                    cout << "Area = " << 3.14159265359*r*r << "\n"; break;
                }
                case 2: {
                    double l, b; cout << "Length and Breadth: "; cin >> l >> b;
                    cout << "Area = " << l*b << "\n"; break;
                }
                case 3: {
                    double s; cout << "Side: "; cin >> s;
                    cout << "Area = " << s*s << "\n"; break;
                }
                case 4: {
                    double r, angle; cout << "Radius and angle (deg): "; cin >> r >> angle;
                    cout << "Area = " << (angle/360.0)*3.14159265359*r*r << "\n"; break;
                }
                case 5: {
                    double a; char type;
                    cout << "Side: "; cin >> a;
                    cout << "TSA(T)/LSA(L)? "; cin >> type;
                    if(type=='T'||type=='t') cout << "TSA = " << 6*a*a << "\n";
                    else cout << "LSA = " << 4*a*a << "\n";
                    break;
                }
                case 6: {
                    double l, b, h; char type;
                    cout << "Length, Breadth, Height: "; cin >> l >> b >> h;
                    cout << "TSA(T)/LSA(L)? "; cin >> type;
                    if(type=='T'||type=='t') cout << "TSA = " << 2*(l*b + b*h + l*h) << "\n";
                    else cout << "LSA = " << 2*(l*h + b*h) << "\n";
                    break;
                }
                case 7: {
                    double r, h; char type;
                    cout << "Radius, Height: "; cin >> r >> h;
                    cout << "TSA(T)/CSA(C)? "; cin >> type;
                    if(type=='T'||type=='t') cout << "TSA = " << 2*3.14159265359*r*(r+h) << "\n";
                    else cout << "CSA = " << 2*3.14159265359*r*h << "\n";
                    break;
                }
                case 8: {
                    double r; cout << "Radius: "; cin >> r;
                    cout << "Area = " << 4*3.14159265359*r*r << "\n"; break;
                }
                default: cout << "Invalid shape\n";
            }
        }
        else if(mainChoice == 2) {
            cout << "\n--- Volume Calculator ---\n";
            cout << "Shapes:\n1. Cube\n2. Cuboid\n3. Cylinder\n4. Cone\n5. Sphere\nEnter shape: ";
            cin >> shapeChoice;
            switch(shapeChoice) {
                case 1: {
                    double a; cout << "Side: "; cin >> a;
                    cout << "Volume = " << a*a*a << "\n"; break;
                }
                case 2: {
                    double l, b, h; cout << "Length, Breadth, Height: "; cin >> l >> b >> h;
                    cout << "Volume = " << l*b*h << "\n"; break;
                }
                case 3: {
                    double r, h; cout << "Radius, Height: "; cin >> r >> h;
                    cout << "Volume = " << 3.14159265359*r*r*h << "\n"; break;
                }
                case 4: {
                    double r, h; cout << "Radius, Height: "; cin >> r >> h;
                    cout << "Volume = " << (1.0/3)*3.14159265359*r*r*h << "\n"; break;
                }
                case 5: {
                    double r; cout << "Radius: "; cin >> r;
                    cout << "Volume = " << (4.0/3)*3.14159265359*r*r*r << "\n"; break;
                }
                default: cout << "Invalid shape\n";
            }
        }
        else cout << "Invalid choice\n";

        cout << "\nContinue? (y/n): ";
        cin >> cont;
        cout << "\n";
    } while(cont=='y' || cont=='Y');

    cout << "Program exited.\n";
    return 0;
}