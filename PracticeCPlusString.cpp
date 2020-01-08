#include <iostream>

using namespace std;

int main(){

    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};         // Apple
    string s6 {s1, 0, 3};   // App
    string s7 (10,'X');     // XXXXXXXXXX ** Using brackets

    // cout << s0 << endl;             // No garbage
    // cout << s0.length() << endl;    // empty string - s0 object - .length() method

//  Initialization
    cout << "\nInitialization" << "\n---------------------" << endl;
    cout << "s1 is initialized to: "<< s1 << endl;
    cout << "s2 is initialized to: "<< s2 << endl;
    cout << "s3 is initialized to: "<< s3 << endl;
    cout << "s4 is initialized to: "<< s4 << endl;
    cout << "s5 is initialized to: "<< s5 << endl;
    cout << "s6 is initialized to: "<< s6 << endl;
    cout << "s7 is initialized to: "<< s7 << endl;

// Comparison
    cout << "\nComparison" << "\n-----------------------" << endl;
    cout << boolalpha;
    cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;
    cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
    cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;
    cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;
    cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;
    cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;
    cout << s1 << " == " << "Apple" << ": " << (s1 == "Apple") << endl;

// Assignment
    cout << "\nAssignment" << "\n-----------------------" << endl;
    s1 = "Watermelon";
    cout << "s1 is now: " << s1 << endl; // Watermelon
    s2 = s1;
    cout << "s2 is now: " << s2 << endl; // Watermelon

    s3 = "Frank";
    cout << "s3 is now: " << s3 << endl; // Frank
    s3[0] = 'C'; // using the first elements in an array
    cout << "s3 change first letter to 'C': " << s3 << endl; //Crank
    s3.at(0) = 'P'; // Using at() method uses balance check
    cout << "s3 change first letter to 'P': " << s3 << endl; //Prank

// Concatenation
    cout << "\nConcatenation" << "\n-----------------------" << endl;
    
    s3 = "Watermelon";
    // The + operator is considered overloaded, works with ints, doubles, strings
    s3 = s5 + " and " + s2 + " juice";
    cout << "s3 is now: " << s3 << endl;    // Apple and Banana juice

    // s3 = "nice " + " cold " + s5 + "juice"; // Compiler error, 2 string style 

//Looping
    cout << "\nConcatenation" << "\n-----------------------" << endl;
    
    s1 = "Apple";
    for (size_t i {}; i < s1.length(); ++i)     //size_t type for non negative integers
        cout << s1.at(i);   // or s1[i] Apple
    cout << endl;

    //Range-based for loop
    for(char c: s1)
        cout << c; // Apple
    cout << endl;

// Substring
    cout << "\nSubstring" << "\n-----------------------" << endl;

    s1 = "this is a test";

    cout << s1.substr(0,4) << endl;  // this
    cout << s1.substr(5,2) << endl;  // is
    cout << s1.substr(10,4) << endl; // test

// Erase
    cout << "\nErase" << "\n-----------------------" << endl;

    s1 = "this is a test";
    s1.erase(0,5); // Erase this from s1 results in "is a test"
    cout << "s1 is now: " << s1 << endl;

// Getline
    cout << "\nGetline" << "\n-----------------------" << endl;

    string full_name {};

    cout << "Enter your full name: ";
    getline(cin, full_name);
    cout << "Your full name is: " << full_name << endl;

//Find
cout << "\nFind" << "\n-----------------------" << endl;

    s1 = "The secret word is ahmad";
    string word {};

    cout << "Enter the word to find: ";
    cin >> word;

    size_t position = s1.find(word);
    if(position != string::npos)
        cout << "Found " << word << " at position: " << position << endl;
    else
        cout << "Sorry, " << word << " not found" << endl;
    
    cout << endl;
    return 0;
}
