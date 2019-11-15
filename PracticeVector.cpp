#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    // vector <char vowels;     //empty
    // vector <char> vowels(5);    // 5 initialized to zero
    vector <char> vowels {'a','e','i','o','u'};


    // vector <int> test_scores (3);    // 3 elements initialized to zero
    // vector <int> test_scores (3, 100); // 3 elements initialized to 100
    vector <int> test_scores {100, 95, 90, 85, 80};

    cout << "\nFirst Score at index 0: " << test_scores[0] << endl;
    cout << "Second Score at index 1: " << test_scores[1] << endl;
    cout << "Third Score at index 2: " << test_scores[2] << endl;
    cout << "Fourth Score at index 3: " << test_scores[3] << endl;
    cout << "Fifth Score at index 4: " << test_scores[4] << endl;

    cout << "\nFirst Score at index 0: " << test_scores.at(0) << endl;
    cout << "Second Score at index 1: " << test_scores.at(1) << endl;
    cout << "Third Score at index 2: " << test_scores.at(2) << endl;
    cout << "Fourth Score at index 3: " << test_scores.at(3) << endl;
    cout << "Fifth Score at index 4: " << test_scores.at(4) << endl;

    cout << "\nThere are " << test_scores.size() << "scores in the vector" << endl;

    cout << "\nEnter a test score to add to the vector" << endl;

    int score_to_add {0};

    cin >> score_to_add;

    test_scores.push_back(score_to_add);
    
    cout << "\nEnter another score to add to the vector" << endl;

    cin >> score_to_add;

    test_scores.push_back(score_to_add);

    cout << "There are now" << test_scores.size() << " test scores in the vector" << endl;

    vector <vector<int>> movie_ratings
    {
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4}
    };

    cout << "\nMovie rating for reviewer 1 using array syntax:" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;

    cout << "\nMovie rating for reviewer 1 using vector syntax:" << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;

    return 0;
}