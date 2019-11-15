#include <iostream>

using namespace std;

main() {

    int num1 {}, num2 {}, num3{};
    int total {};
    const int count{3};

    cout << "Enter three integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    double average {0.0};

    average = static_cast<double>(total) / count;
    // Old style casting:
    // average = (double)total/count;

    cout << "\nThe 3 numbers were: " << num1 << ", " << num2 << ", " << num3 <<endl;
    cout << "The sum of the numbers is: " << total << endl;
    cout << "The average of the numbers is: " << average << endl;

    return 0;
}