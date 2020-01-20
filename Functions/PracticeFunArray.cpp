#include <iostream>

using namespace std;

void print_array( int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

void print_array (int arr[], size_t size){  //const
    for (size_t i{0}; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void set_array(int arr[], size_t size, int value){
    for (size_t i{}; i<size; ++i){
        arr[i] = value;
    }
}

int main() {
    int my_scores[] {100,99,98,97,96,95};

    print_array(my_scores, 6);
    set_array(my_scores, 6, 100);
    print_array(my_scores, 6);
    return 0;
}