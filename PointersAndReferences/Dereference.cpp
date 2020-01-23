#include <iostream>
#include <vector>

using namespace std;

int main(){
    //Exmaple 1:
    int score {100};            //Initializing integer variable to 100
    int *score_ptr {&score};    //Initializing pointer with the address of the integer

    cout << "Dereferencing the pointer: " << *score_ptr << endl;

    *score_ptr = 200;           //Assigning new integer value to the pointer
    cout << "Assign 200 to the pointer" << endl; 

    cout << "Dereferencing the pointer after assignment: " << *score_ptr << endl;
    cout << "Value of the variable after assignment: " << score << endl;

    //Exmaple 2:
    cout << "\n----------------------------------" << endl;
    double high_temp {100.7};       
    double low_temp {37.4};         
    double *temp_ptr {&high_temp};  

    cout << "Dereference the pointer to the initialized high_temp: " << *temp_ptr << " at the address of: " << &high_temp << endl;      
    temp_ptr = &low_temp;
    cout << "Assign new reference address to pointer at: " << &low_temp << endl;
    cout << "Dereference the pointer to low_temp: " << *temp_ptr << " referencing at: " << &low_temp << endl;

    //Example 3:
    cout << "\n----------------------------------" << endl;
    string name{"Frank"};
    string *string_ptr{&name};

    cout << *string_ptr << endl;    //Frank
    name = "James";
    cout << *string_ptr << endl;    //James

    //Example 4:
    cout << "\n----------------------------------" << endl;
    vector<string> stooges {"Larry", "Gary", "Mary"};
    vector<string> *vector_ptr{nullptr};

    vector_ptr = &stooges;
    // Same as: stooges.at(0)
    cout << "First stooge: " << (*vector_ptr).at(0) << endl;    

    cout << "Stooges: ";
    for (auto stooge: *vector_ptr)
        cout << stooge << " ";
    cout << endl;

    cout << endl;
    return 0;
}