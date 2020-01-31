//Simple references
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int num {100};
    int &ref {num};

    cout << num << endl;
    cout << ref << endl;

    num = 200;
    cout << "\n---------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;

    ref = 300;
    cout << "\n---------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;

    //Exmaple2
    cout << "\n---------------------------" << endl;
    vector<string> stooges {"Larry","Gary","Mary"};

    for(auto str: stooges)      //str is a COPY of each vector element
        str = "Funny";          //changes the copy, not the actual

    for(auto str: stooges)      //inefficient - not using const
        cout << str << endl;    //vector elements unchanged

    //Example3
    cout << "\n---------------------------" << endl;
    for(auto &str: stooges)     //&str is a reference to each vector element
        str = "Funny";          //changes the reference

    for (auto const &str: stooges)  //notice using const - more efficient/protected
        cout << str << endl;        //vector element has changed

    cout << endl;
    return 0;
}