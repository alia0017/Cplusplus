#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num){
    cout << "Printing int: " << num << endl;
}

void print(double num){
    cout << "Printing double: " << num << endl;
}

void print(string s){
    cout << "Printing string: " << s << endl;
}

void print(string v, string s){
    cout << "Printing 2 strings: " << v << " and " << s << endl;
}

void print(vector<string> v){
    cout << "Printing vector of strings: ";
    for(auto s: v)
        cout << s + " ";
    cout << endl;
}

int main() {

    print(100);
    print(123.4);
    print(123.1F);
    print("C-style string");

    string s {"C++ string"};
    print(s);   //C++ string

    print("C-style string", s);

    vector<string> three_stooges{"Larry","Gary","Mary"};
    print(three_stooges);
    cout << endl;
}
