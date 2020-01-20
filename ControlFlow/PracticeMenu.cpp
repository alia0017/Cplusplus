#include <iostream>

using namespace std;

int main() {
    
    char option {};
    do {
        cout << "\n--------------------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl;
        cout << "Enter your selection: ";
        cin >> option;
        
        if(option == '1')
            cout << "You chose option 1 - do this" << endl;
        else if (option == '2')
            cout << "You chose option 2 - do that" << endl;
        else if (option == '3')
            cout << "You chose option 3 - do something else" << endl;
        else if (option == 'q' || option == 'Q')
            cout << "Goodbye" << endl;
        else 
            cout << "Unknown option -- try again" << endl;

    } while (option != 'q' && option != 'Q');


    cout << endl;
    return 0;
}