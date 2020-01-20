/**
 * Usually included in the h. or header since all the source files need access to it.
 */

#include <iostream>

using namespace std;

//definition
inline int add_numbers(int a, int b){ 
    return a + b;
}

int main(){
    int result {};
    result = add_numbers(100,200); //call
    cout << result << endl;
    return 0;
}