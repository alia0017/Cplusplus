#include <iostream>

/*
 *  Explanation of what happens when a function is called:
 *  main:
 *      push space for the return value - on the stack
 *      push space for the parameters - on the stack
 *      push the return address - on the stack
 *      transfer control to func(jmp)
 *  func:
 *      push the address of the previous activation record - moving the stack pointer
 *      push any register values that will need to be restored before returning
 *      perfrom the code in func
 *      restore the register values
 *      restore the previous activation record (move to the stack pointer)
 *      store any function results
 *      transfer control to the return address(jmp)
 *  main:
 *      pop the parameters
 *      pop the return value
 */

using namespace std;

void func2(int &x, int y, int z){
    x+= y + z;
}

int func1(int a, int b){
    int result {};
    result = a + b;
    func2(result, a, b);
    return result;
}

int main(){

    int x{10};
    int y{20};
    int z{};
    z = func1(x,y);
    cout << "z= " << z << endl;
    return 0;
}

