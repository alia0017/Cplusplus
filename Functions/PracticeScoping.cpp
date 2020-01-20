//Static Scoping
#include <iostream>

using namespace std;

void local_exmaple();
void global_exmaple();
void static_local_example();

// Global variable - declared outside any class or function
int num {300};

void local_example(int x){
    int num {1000}; // Local to local_example
    cout << "\nLocal num is: " << num << " in local_example - start" << endl; //1000
    num = x;
    cout << "Local num is: " << num << " in local_example - end" << endl; //10
    //num1 in main is not within scope - so it can't be used here.
}

void global_example(){
    cout << "\nGlobal num is: " << num << " in global_example - start" << endl;
    num *= 2;
    cout << "Global num is: " << num << " in global_example - end" << endl;
}

void static_local_example(){
    //local to static_local_example static - retain it value between calls
    static int num {5000};
    cout << "\nLocal static num is: " << num << " in static_local_example - start" << endl;
    num += 1000;
    cout << "Local static num is: " << num << " in static_local_example - end" << endl;
}

main(){
    int num1 {100}; //local to main
    int num2 {500}; //local to main

    cout << "Local num1 is: " << num1 << " in main" << endl;

    {// creates a new level of scope
        int num1 {200}; // local to this inner block
        cout << "Local num1 is: " << num1 << " in the inner block in main" << endl;
        cout << "Inner block in main can see out - num2 is: " << num2 << endl;
    }

    cout << "Local num1 is: " << num1 << " in main" << endl;

    local_example(10);
    local_example(20);

    global_example();
    global_example();

    static_local_example();
    static_local_example();

    cout << endl;
    return 0;

}