#include <iostream>
#include <cstring>  //for c-style string functions
#include <cctype>   //for character-based functions

using namespace std;

int main()
{
    char first_name[20]{};
    char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};

    // cout << "Please enter your first name: ";
    // cin >> first_name;
    // cout << "Please enter your last name: ";
    // cin >> last_name;

    // cout << "=========================" << endl;
    // cout << "\nGreetings, " << first_name << " your first name has " << strlen(first_name) << " chars" << endl;
    // cout << "and your last name, " << last_name << " has " << strlen(last_name) << " chars" << endl;
    // // REMEMBER LEFT <- RIGHT
    // strcpy(full_name, first_name);  // Copying first_name to full_name
    // // REMEMBER LEFT <- RIGHT
    // strcat(full_name, " ");         // Concatenate full_name a space
    // // REMEMBER LEFT <- RIGHT
    // strcat(full_name, last_name);   // Copying last_name to full_name
    // cout << "\nYour full name is " << full_name << endl;

    // cout << "==============================" << endl;
    // cout << "Enter your full name: ";
    // cin >> full_name;
    // cout << full_name;      //Only displays the first_name

    cout << "==============================" << endl;
    cout << "Enter your full name: ";
    cin.getline(full_name, 50);
    cout << "Your full name is " << full_name << endl;

    cout << "==============================" << endl;
    strcpy(temp, full_name);
    if(strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same" << endl;
    else
        cout << temp << " and " << full_name << " are different" << endl;

    cout << "==============================" << endl;    
    for(size_t i{0}; i < strlen(full_name); i++) {
        if(isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }
    cout << "Your full name is " << full_name << endl;

    cout << "==============================" << endl;  
    if(strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same" << endl;
    else
        cout << temp << " and " << full_name << " are different" << endl;
    
    cout << "==============================" << endl; 
    cout << "Result of comparing " << temp << " and " << full_name << " : " << strcmp(temp, full_name) << endl;
    cout << "Result of comparing " << full_name << " and " << temp << " : " << strcmp(full_name, temp) << endl;
}