#include <iostream>

using namespace std;

int main(){

    int scores[] {100,95,89};

    cout << "\nValue of scores: " << scores << endl;          //0x61ff04

    int *score_ptr{scores};
    cout << "Value of score_ptr: " << score_ptr << endl;    //0x61ff04

    cout << "\nArray subscript notation" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;

    cout << "\nPointer subscript notation" << endl;
    cout << score_ptr[0] << endl;
    cout << score_ptr[1] << endl;
    cout << score_ptr[2] << endl;

    cout << "\nArray offset notation" << endl;
    cout << *scores << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;

    cout << "\nPointer subscript notation" << endl;
    cout << *(score_ptr) << endl;
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr + 2) << endl;

    cout << endl;
    return 0;
}