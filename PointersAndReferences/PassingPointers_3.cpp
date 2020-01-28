#include <iostream>
#include <vector>
#include <string>

using namespace std;

void display(vector<string> *v){
    for(auto str: *v)
        cout << str << " ";
    cout << endl;
}

void display(int *array, int sentinel){
    while(*array != sentinel)
        cout << *array++ << " ";
    cout << endl;
}

int main(){
    cout << "---------------------" << endl;
    vector<string> stooges {"Larry", "Gary", "Mary"};
    display(&stooges);

    cout << "---------------------" << endl;
    int scores[] {100,98,95,90,-1};
    display(scores, -1);

    cout << endl;
    return 0;
    }