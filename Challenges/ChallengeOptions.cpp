#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    char option {};
    vector<int> numbers{};

    do {
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> option;

        //Option P
        if (option == 'p'|| option == 'P'){
            if (numbers.size() == 0)
                cout << "[] the list is empty" << endl;
            else {
                cout << "[ "; 
                for(auto num: numbers)
                    cout << num << " ";  
                cout << "]" << endl;
            }
        }
        // Option A
        else if (option == 'A' || option == 'a'){
            int num_to_add{};
            cout << "Enter an integer to add to the list: ";
            cin >> num_to_add;
            numbers.push_back(num_to_add);
            cout << num_to_add << " added" << endl;
        }
        // Option M
        else if (option == 'M' || option == 'm'){
            if (numbers.size() == 0)
                cout << "Unable to calculate mean - no data" << endl;
            else {
                int total{};
                for(auto num: numbers)
                    total += num;
                cout << "The mean is : " << static_cast<double>(total)/numbers.size() << endl; //Cast int into double using static_cast
            }
        }
        // Option S
        else if (option == 'S' || option == 's'){
            if (numbers.size() == 0)
                cout << "Unable to determine the smallest - list is empty" << endl;
            else {
                int smallest = numbers.at(0);
                for(auto num: numbers)
                    if(num < smallest)
                        smallest = num;
                cout << "The smallest number is: " << smallest << endl;
            }
        }
        // Option L
        else if (option == 'L' || option == 'l'){
            if (numbers.size() == 0)
                cout << "Unable to determine the largest - list is empty" << endl;
            else {
                int largest = numbers.at(0);
                for(auto num: numbers)
                    if(num > largest)
                        largest = num;
                cout << "The largest number is: " << largest << endl;
            }
        }
        // Option Q
        else if (option == 'Q' || option == 'q'){
            cout << "Goodbye" << endl;
            break;
        }
        else
            cout << "Unknown selection, please try again" << endl;

    } while (option != 'q' || option != 'Q');

    cout << endl;
    return 0;
}