#include <iostream>

using namespace std;

main() {

    int num1 {10};
    int num2 {20};

    num1 = num2 = 1000;

    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl; 

    int num3 = 10;
    int num4 = 3;

    int mod_result = num3 % num4;

    cout << num3 << " % " << num4 << " = " << mod_result << endl;
    
    int counter {10};
    int result {0};

    //Example 1:
    // cout << "\nCounter: " << counter << endl;

    // counter = counter + 1;
    // cout << "Counter: " << counter << endl;
    // counter ++;
    // cout << "Counter: " << counter << endl;
    // ++ counter;
    // cout << "Counter: " << counter << endl;

    //Example 2:
    // cout << "\nCounter: " << counter << endl;

    // result = ++counter; // pre increment
    // cout << "Counter: " << counter << endl;
    // cout << "Result: " << result << endl;

    //Example 3:
    // cout << "\nCounter: " << counter << endl;

    // result = counter++; // post increment
    // cout << "Counter: " << counter << endl;
    // cout << "Result: " << result << endl;

    //Example 4:
    // cout << "\nCounter: " << counter << endl;

    // result = ++counter + 10; // addition pre counter
    // cout << "Counter: " << counter << endl;
    // cout << "Result: " << result << endl;

    //Example 5:
    cout << "\nCounter: " << counter << endl; // counter = 10

    result = counter++ + 10; // addition post counter
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    return 0;
}