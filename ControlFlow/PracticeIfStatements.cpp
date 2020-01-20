#include <iostream>

using namespace std;

int main(){
    int num {};
    const int min{10};
    const int max{100};

    cout << "\nEnter a number bettwen " << min << " and " << max << " : ";
    cin >> num;

    if (num >= min){
        cout << "\n ======== Statement 1 ========" << endl;
        cout << num << " is greater than or equal to " << min << endl;

        int diff{num - min};
        cout << num << " is " << diff << " greater than " << min << endl;
    }

    if (num <= max){
        cout << "\n ======== Statement 2 ========" << endl;
        cout << num << " is less than or equal to " << max << endl;

        int diff{max - num};
        cout << num << " is " << diff << " less than " << max << endl;
    }

    if (num >= min && num <= max ){
        cout << "\n ======== Statement 3 ========" << endl;
        cout << num << " is within range of " << min << " & " << max << endl;
        cout << "This means both statements above are true" << endl;
    }

    if (num == min || num == max){
        cout << "\n ======== Statement 4 ========" << endl;
        cout << num << " is right on the boundary " << endl;
    }

    cout << endl;
    return 0;
}