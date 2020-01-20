#include <iostream>
using namespace std;
int main()
{
    // int rows;
    // cout << "Enter number of rows: ";
    // cin >> rows;

    string insert;
    cout << "Enter a string: ";
    getline(cin, insert);

    for(int i = 1; i <= insert.length(); ++i){
        for(int j = 1; j <= i; ++j){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}