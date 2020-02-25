#include <iostream>

using namespace std;

int main(){

    char letter_grade{};

    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;

    switch(letter_grade){
        case 'a':
            cout << "You need a 90 or above, study hard" << endl;
            break;
        case 'b':
            cout << "You need 80-89 for a B, go study!" << endl;
            break;
        case 'c':
            cout << "You need 70-79 for an average grade" << endl;
            break;
        case 'd':
            cout << "You need 60-69, should strive for a better grade" << endl;
            break;
        case 'f':
        { 
            char confirm{};
            cout << "Are you sure (Y/N)?";
            cin >> confirm;

            if (confirm == 'y' || confirm == 'Y')
                cout << "OK, I guess you didn't want to study.." << endl;
            else if (confirm == 'n' || confirm == 'N')
                cout << "Good, good study!" << endl;
            else 
                cout << "Invalid input" << endl;
            break; 
        }
            
        default:
            cout << "Sorry invalid grade";
    }

    cout << endl;
    return 0;
}