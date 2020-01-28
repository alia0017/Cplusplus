//Pass by reference with pointers
#include <iostream>

using namespace std;

void double_data(int *int_ptr);

void double_data(int *int_ptr){
    //*int_ptr = *int_ptr * 2; -- long form
    *int_ptr *= 2;
}

int main(){
    int value {10};
    int *int_ptr {nullptr};                 //initializing pointer to null

    cout << "Value: " << value << endl;     //10
    double_data(&value);                    //passed through function using the address
    cout << "Value: " << value << endl;     //20

    cout << "--------------------" << endl;
    int_ptr = &value;                       //initializing pointer to the address of value - 20 
    double_data(int_ptr);                   //passed through function using the pointer
    cout << "Value: " << value << endl;     //40    
    
    cout << endl;
    return 0;
}