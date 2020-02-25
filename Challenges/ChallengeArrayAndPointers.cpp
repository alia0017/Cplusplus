#include <iostream>

using namespace std;

void print(const int *const array, size_t size){
    cout << "[ ";
    for (size_t i{0}; i < size; i++)
        cout << array[i] << " ";    //using subsript notion
    cout <<"]"<< endl;
}

//Needs to point to a pointer of an integer at the end (on the heap)
int *apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2){
    //Initializing a viarable pointer
    int *new_array {};
    //Creating it on the Heap
    new_array = new int[size1 * size2];

    int position {0};
    for (size_t i{0}; i<size2; ++i){
        for(size_t j{0}; j<size1; ++j){
            new_array[position] = arr1[j] * arr2[i];
            ++position;
        }
    }
    return new_array;
}

int main(){
    const size_t array1_size{5};
    const size_t array2_size{3};

    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};

    cout << "Array 1: ";
    print(array1, array1_size);

    cout << "Array 2: ";
    print(array2, array2_size);

    //*results will return the # of integers from the apply_all function
    int *results = apply_all(array1, array1_size, array2, array2_size); // 10
    //results_size will result in the size of the array
    constexpr size_t results_size {array1_size * array2_size};          // 15

    cout << "Result: ";
    print(results, results_size);

    delete [] results;
    cout << endl;
    return 0;
}