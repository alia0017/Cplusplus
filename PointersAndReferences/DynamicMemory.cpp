#include <iostream>

using namespace std;

int main(){

    //Example 1:
    int *int_ptr {nullptr};
    int_ptr = new int;          //Allocating an integer on the heap
    cout << int_ptr << endl;    //Address on the heap
    delete int_ptr;

    //Example 2:
    size_t size{0};
    double *temp_ptr {nullptr};
    cout << "How many temps? ";
    cin >> size;

    temp_ptr = new double[size];    // Allocating the number of doubles onto the heap
    cout << temp_ptr << endl;   //Address that contains the first of the [size] of temp_ptr
    delete [] temp_ptr;

    cout << endl;
    return 0;
}