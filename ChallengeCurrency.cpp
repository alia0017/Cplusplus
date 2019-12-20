#include <iostream>

using namespace std;

main() {

//define constant values:
const int dollar_value {100};
const int quarter_value {25};
const int dime_value {10};
const int nickle_value {5};
const int penny_value {1};

cout << "\nEnter an amount in cents: ";
int value_amount {0};
cin >> value_amount;

int balance, dollars, quarters, dimes, nickles, pennies;

dollars = value_amount / dollar_value;
balance = value_amount - (dollars * dollar_value);

quarters = balance / quarter_value;
balance -= (quarters * quarter_value);

dimes = balance / dime_value;
balance -= (dimes * dime_value);

nickles = balance / nickle_value;
balance -= (nickles * nickle_value);

pennies = balance / penny_value;
balance -= (pennies * penny_value);

cout << "dollars  : " << dollars << endl;
cout << "quarters : " << quarters << endl;
cout << "dimes    : " << dimes << endl;
cout << "nickles  : " << nickles << endl;
cout << "pennies  : " << pennies << endl;  

cout << endl;

cout << "--------------------------------" << endl;
cout << "Solution using the Modulo Operator" << endl;
cout << "--------------------------------" << endl;

balance, dollars, quarters, dimes, nickles, pennies = 0;

dollars = value_amount / dollar_value;
balance = value_amount % dollar_value;

quarters = balance / quarter_value;
balance %= quarter_value;

dimes = balance / dime_value;
balance %= dime_value;

nickles = balance / nickle_value;
balance %= nickle_value;

pennies = balance / penny_value;
balance %= penny_value;

cout << "dollars  : " << dollars << endl;
cout << "quarters : " << quarters << endl;
cout << "dimes    : " << dimes << endl;
cout << "nickles  : " << nickles << endl;
cout << "pennies  : " << pennies << endl;  

cout << endl;
return 0;
}