#include <iostream>

using namespace std;

int main(){
    /**
     * Exmaple 1
     */

    // int num{};

    // cout << "Enter a integer: ";
    // cin >> num;

    // //Using if else statement
    // if(num % 2 == 0)
    //     cout << num << " is even" << endl;
    // else
    //     cout << num << " is odd" << endl;

    // //Using Conditional Operator
    // cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl;

    /**
     * Exmaple 2
     */

    int num1{}, num2{};

    cout << "Enter two integers, separated by a space: ";
    cin >> num1 >> num2;

    if (num1 != num2) {
        cout << "Largest: " << ((num1 > num2) ? num1 : num2) << endl;
        cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << endl;
    } else {
        cout << "The numbers are the same" << endl;
    }

    cout << endl;
    return 0;
}