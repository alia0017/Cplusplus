#include <iostream>
#include <vector>

using namespace std;

main() {
    vector <int> vector1 {};
    vector <int> vector2 {};

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "First index in vector1: " << vector1.at(0) << endl;
    cout << "Second index in vector1: " << vector1.at(1) << endl;
    cout << "Size of the vector1: " << vector1.size() << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "\nFirst index in vector2: " << vector2.at(0) << endl;
    cout << "Second index in vector2: " << vector2.at(1) << endl;
    cout << "Size of the vector2: " << vector2.size() << endl;

    vector <vector <int>> vector_2d {};

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "\nFirst index at vector_2d: " << vector_2d.at(0).at(0) << endl;
    cout << "Second index at vector_2d: " << vector_2d.at(0).at(1) << endl;
    cout << "Third index at vector_2d: " << vector_2d.at(1).at(0) << endl;
    cout << "Fourth index at vector_2d: " << vector_2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;

    cout << "\nFirst index at vector_2d: " << vector_2d.at(0).at(0) << endl;
    cout << "Second index at vector_2d: " << vector_2d.at(0).at(1) << endl;
    cout << "Third index at vector_2d: " << vector_2d.at(1).at(0) << endl;
    cout << "Fourth index at vector_2d: " << vector_2d.at(1).at(1) << endl;

    cout << "\nThe new first element in vector1 is: " << vector1.at(0);
    return 0;
}