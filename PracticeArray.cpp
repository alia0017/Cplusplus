#include <iostream>

using namespace std;

int main(){

    char vowels[] {'a','e','i','o','u'};
    cout << "The first vowel is; " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;

    double hi_temps[] {90.1, 89.98, 77.5, 81.6};
    cout << "\nThe first tempature is: " << hi_temps[0] << endl;

    hi_temps[0] = 100.7;

    cout << "The first high tempature is now: " << hi_temps[0] << endl;

    int test_scores[]{100, 90, 80, 70, 60};

    cout << "\nFirst Score at index 0: " << test_scores[0] << endl;
    cout << "Second Score at index 1: " << test_scores[1] << endl;
    cout << "Third Score at index 2: " << test_scores[2] << endl;
    cout << "Fourth Score at index 3: " << test_scores[3] << endl;
    cout << "Fifth Score at index 4: " << test_scores[4] << endl;

    cout << "\nEnter 5 new test scores" << endl;
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];

    cout << "\nThe updated Array is" << endl;
    cout << "First Score at index 0: " << test_scores[0] << endl;
    cout << "Second Score at index 1: " << test_scores[1] << endl;
    cout << "Third Score at index 2: " << test_scores[2] << endl;
    cout << "Fourth Score at index 3: " << test_scores[3] << endl;
    cout << "Fifth Score at index 4: " << test_scores[4] << endl;

    cout << "\nThe name of the array is: " << test_scores << endl;

    return 0;
}