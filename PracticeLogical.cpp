#include <iostream>

using namespace std;

main() {

    int num{};
    const int lower{10};
    const int upper{20};

    cout << boolalpha;

    //Exmaple 1:
    // cout << "Enter a integer - the bounds are " << lower << " and " << upper << ": ";
    // cin >> num;
    // bool within_bounds{false};
    // within_bounds = (num > lower && num < upper);
    // cout << num << " is between " << lower << " and " << upper << ": " << within_bounds << endl;

    //Example 2:
    // cout << "Enter a integer - the bounds are " << lower << " and " << upper << ": ";
    // cin >> num;
    // bool outside_bounds{false};
    // outside_bounds = (num < lower || num > upper);
    // cout << num << " is outside " << lower << " and " << upper << ": " << outside_bounds << endl;

    //Example 3:
    cout << "Enter a integer - the bounds are " << lower << " and " << upper << ": ";
    cin >> num;
    bool on_bounds{false};
    on_bounds = (num == lower || num == upper);
    cout << num << " is on bound " << lower << " and " << upper << ": " << on_bounds << endl;

    cout << endl;
    return 0;
}