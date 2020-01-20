#include <iostream>
#include <vector>

using namespace std;

char option{};              // our menu selection
vector<int> numbers{};      // vector of ints

// Function Prototypes
void display_menu();
char user_input();
void handle_display(vector<int> &v);
void handle_add(vector<int> &v);
void handle_mean(vector<int> &v);
void handle_smallest(vector<int> &v);
void handle_largest(vector<int> &v);
void handle_find(vector<int> &v);
void handle_quit();
void handle_unknown();

bool find (vector<int> &v, int target);

// main
main() {

    do {
        display_menu();
        option = user_input();
        switch(option) {
            case 'P':
                handle_display(numbers);
                break;
            case 'A':
                handle_add(numbers);
                break;
            case 'M':
                handle_mean(numbers);
                break;
            case 'S':
                handle_smallest(numbers);
                break;
            case 'L':
                handle_largest(numbers);
                break;
            case 'F':
                handle_find(numbers);
                break;
            case 'Q':
                handle_quit();
                break;
            default:
                handle_unknown();
        }
    } while (option != 'Q');
    cout << endl;
    return 0;
}


// Displays the menu
void display_menu(){
    cout << "\nP - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "F - Find a number" << endl;
    cout << "Q - Quit" << endl;
    cout << "\nEnter your choice: ";
}

char user_input(){
    char input {};      //defining a local variable
    cin >> input;
    return toupper(input);
}

// Option P
void handle_display(vector<int> &v){
    if (v.size() == 0)
        cout << "[] the list is empty" << endl;
    else {
        cout << "[ "; 
        for(auto num: v)
            cout << num << " ";  
        cout << "]" << endl;
        }
}

// Option A
void handle_add(vector<int> &v){
    int num_to_add{};
    cout << "Enter an integer to add to the list: ";
    cin >> num_to_add;
    v.push_back(num_to_add);
    cout << num_to_add << " added" << endl;
}

// Option M
void handle_mean(vector<int> &v){
    if (v.size() == 0)
        cout << "Unable to calculate mean - list is empty" << endl;
    else {
        int total{};
        for(auto num: v)
            total += num;
        cout << "The mean is : " << static_cast<double>(total)/v.size() << endl; //Cast int into double using static_cast
    }
}

// Option S
void handle_smallest(vector<int> &v){
    if (v.size() == 0)
        cout << "Unable to determine the smallest - list is empty" << endl;
    else {
        int smallest = v.at(0);
        for(auto num: v)
            if(num < smallest)
                smallest = num;
        cout << "The smallest number is: " << smallest << endl;
    }
}

// Option L
void handle_largest(vector<int> &v){
    if (v.size() == 0)
        cout << "Unable to determine the largest - list is empty" << endl;
    else {
        int largest = v.at(0);
        for(auto num: v)
            if(num > largest)
                largest = num;
        cout << "The largest number is: " << largest << endl;
    }
}

// Option F
void handle_find(vector<int> &v){
    int target{0};
    cout << "Enter the number to find: ";
    cin >> target;
    if (find(v, target))
        cout << target << " was found" << endl;
    else
        cout << target << " was not found" << endl;
}

// Option F - Function helper
bool find(vector<int> &v, int target){
    for(auto num: v)
        if (num == target)
            return true;
        return false;
}

// Option Q
void handle_quit(){
    cout << "Goodbye" << endl;
}

// Default Option
void handle_unknown(){
    cout << "Unknown selection, please try again" << endl;
}
