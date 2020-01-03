#include <iostream>

using namespace std;

int main() {

    // int num {};
    // cout << "Enter a positive integer - start the count down: ";
    // cin >> num;

    // while(num > 0){
    //     cout << num << endl;
    //     --num;
    // }
    // cout << "Blast off!" << endl;
    // cout << endl;

    // cout << "------------------------" << endl;
    // cout << "Counting up to Practice" << endl;
    // cout << "------------------------" << endl;

    // int num {};
    // cout << "\nEnter a positive integer - count up to: ";
    // cin >> num;

    // int i {1};
    // while(num >= i){
    //     cout << i << endl;
    //     i++;
    // }
    // cout << "Reached it!" << endl;
    // cout << endl;

    // cout << "-----------------" << endl;
    // cout << "Input validation" << endl;
    // cout << "----------------" << endl;

    // int num {};
    // cout << "\nEnter an integer less than 100: ";
    // cin >> num;

    // while(num >= 100){ // !(number < 100)
    //     cout << "Thats incorrect, please enter an integer less than 100: ";
    //     cin >> num;
    // }
    // cout << "Your number is correct!" << endl;
    // cout << endl;

    cout << "------------------------------" << endl;
    cout << "Boolean Input Flag Validation" << endl;
    cout << "------------------------------" << endl;

    bool done {false};
    int num {};

    while(!done){
        cout << "\nEnter an integer between 1 and 5:";
        cin >> num;
        if (num <= 1 || num >= 5){
            cout << "Out of range, try again" << endl;
        } else {
            cout << "Thanks!" << endl;
            done = true;
        }
    }

    cout << endl;
}