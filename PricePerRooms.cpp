#include <iostream>

using namespace std;

int main(){
    
    cout << "Welcome to Carpet Cleaning Service" << endl;
    
    int small_room_number {0};
    cout << "\nNumber of small rooms required cleaning: ";
    cin >> small_room_number;

    int large_room_number {0};
    cout << "Number of large roooms required cleaning: ";
    cin >> large_room_number;

    const double price_per_small {25};
    const double price_per_large {35};
    const double tax_rate {0.06}; // 6% tax
    const int expiry_date {30}; // 30 days

    double estimated_cost = small_room_number * price_per_small + large_room_number * price_per_large;
    double tax_cost = estimated_cost * tax_rate;
    double total_estimated = estimated_cost * (1 + tax_rate);

    cout << "\nEstimated carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_room_number << endl;
    cout << "Number of large rooms: " << large_room_number << endl;
    cout << "Price per small room: $" << price_per_small << endl;
    cout << "Price per large room: $" << price_per_large << endl;
    cout << "Cost: $" << estimated_cost << endl;
    cout << "Tax: $" << tax_cost << endl;
    cout << "=====================================" << endl;
    cout << "Total estimate: $" << total_estimated << endl;
    cout << "This estimate is valid for " << expiry_date << " days" << endl;
    
    return 0;
}