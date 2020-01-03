#include <iostream>
#include <vector>

using namespace std;

main() {

    // for(int num1 {1}; num1 <= 10; ++num1){ //Outer loop
    //     for(int num2 {1}; num2 <= 10; ++num2){ //Inner loop
    //         cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    //     }
    //     cout << "num2 has reached 10 - exiting to other loop" << endl;
    // }

    int num_items{};
    cout << "How many items do you have? ";
    cin >> num_items;

    vector<int> data{}; //A vector is a dynamic data structure

    for (int i{1}; i <= num_items; ++i){
        int data_item{};
        cout << "Enter data item " << i << ": ";
        cin >> data_item;
        data.push_back(data_item); //pushes the data_item into data vector
    }
    cout << "\nDisplaying Histogram" << endl;
    for (auto val: data){
        for (int i{1}; i <= val; ++i){
            if(i % 5 == 0)
                cout << "*";
            else
                cout << "-";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}