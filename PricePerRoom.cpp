#include <iostream>

using namespace std;

int main(){

    cout << "Hello, welcome to Carpet Cleaning Service" << endl;
    cout << "\nHow many rooms would you like cleaned?: ";
    int number_of_rooms;
    cin >> number_of_rooms;

    const double price_per_room {32.5};
    const double tax_rate {0.06};
    const int estimaite_expiry {30}; //days

    double estimated_cost = price_per_room * number_of_rooms;
    double total_tax = estimated_cost * tax_rate;
    double total_estimated_cost = estimated_cost * (1 + tax_rate);

    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per rooms: $" << price_per_room << endl;
    cout << "Cost: $" << estimated_cost << endl;
    cout << "Tax: $" << total_tax << endl;
    cout << "==========================================" << endl;

    cout << "Total Estimate: $" << total_estimated_cost << endl;
    cout << "This estimate is valid for "<< estimaite_expiry << " days" << endl;
    return 0;
}