#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

// Item struct
struct Item {
    string name;
    double price;
    string category;
};

// Person struct
struct Person {
    string name;
    vector<Item> orders;
};

// Country tax rates
double getTaxRate(const string& country) {
    if(country == "US") return 0.07;
    if(country == "UK") return 0.2;
    if(country == "Canada") return 0.13;
    if(country == "Germany") return 0.19;
    if(country == "Japan") return 0.1;
    if(country == "China") return 0.13;
    if(country == "India") return 0.18;
    return 0.0;
}

// Calculate total for one person
double calculateBill(const Person& p, double taxRate) {
    double subtotal = 0;
    for(auto& item : p.orders)
        subtotal += item.price;
    return subtotal + (subtotal * taxRate);
}

int main() {
    vector<Person> people;
    string country;
    cout << "Enter country (US/UK/Canada/Germany/Japan/China/India): ";
    cin >> country;
    double taxRate = getTaxRate(country);

    int numPeople;
    cout << "Enter number of people: ";
    cin >> numPeople;
    cin.ignore();

    // Input people and their orders
    for(int i=0; i<numPeople; i++){
        Person p;
        cout << "Enter name for person " << i+1 << ": ";
        getline(cin, p.name);

        int numItems;
        cout << "How many items for " << p.name << "? ";
        cin >> numItems;
        cin.ignore();

        for(int j=0; j<numItems; j++){
            Item item;
            cout << "Item " << j+1 << " name: ";
            getline(cin, item.name);
            cout << "Price: ";
            cin >> item.price;
            cin.ignore();
            p.orders.push_back(item);
        }
        people.push_back(p);
    }

    // Output bill per person
    cout << fixed << setprecision(2);
    cout << "\n--- Bill Summary ---\n";
    for(auto& p : people){
        double total = calculateBill(p, taxRate);
        cout << p.name << " owes: $" << total << endl;
    }
    return 0;
}