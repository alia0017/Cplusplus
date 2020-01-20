//Pass-by-reference
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v); //const

void pass_by_ref1(int &num){
    num = 1000;
}

void pass_by_ref2(string &s){
    s = "Changed";
}

void pass_by_ref3(vector<string> &v){
    v.clear();
}

void print_vector(const vector<string> &v){
    for (auto s: v)
        cout << s << " ";
    cout << endl; 
}

int main(){
    int num {10};

    cout << "\nnum before pass_by_ref1: " << num << endl;
    pass_by_ref1(num);
    cout << "num after calling pass_by_ref: " << num << endl;

    int another_num {20};

    cout << "\nanother_num before pass_by_ref1: " << another_num << endl;
    pass_by_ref1(another_num);
    cout << "another_num after calling pass_by_ref2: " << another_num << endl;

    string name {"Frank"};
    cout << "\nstring before pass_by_ref2: " << name << endl;
    pass_by_ref2(name);
    cout << "string after calling pass_by_ref2: " << name << endl;

    vector<string> stooges {"Larry", "Gary", "Mary"};
    cout << "\nstooges before pass_by_ref3: ";
    print_vector(stooges);
    pass_by_ref3(stooges);
    cout << "stooges after calling pass_by_ref3: ";
    print_vector(stooges);

    cout << endl;
    return 0;
}