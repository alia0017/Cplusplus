#include <iostream>

using namespace std;

int main(){
    int age;
    double hourly_wage =  23.50;
    string name;

    cout << "Please enter your name: ";
    cin >> name;

    cout << "Please enter your age: ";
    cin >> age;

    cout << "Your name is: " << name << ", your age is: " << age << " and your wage is " << hourly_wage << endl;

    return 0;
}