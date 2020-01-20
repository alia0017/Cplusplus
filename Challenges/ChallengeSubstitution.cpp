#include <iostream>

using namespace std;

int main(){

    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"ZYXWVUTSRQPONMLKJIHGFEDCBAzywvutsrqponmlkjihgfedcba"};

    string message {};
    cout << "\nPlease enter a message you wish to encrypt: ";
    getline(cin, message);

// Encryping a message

    string encrpted_message {};
    cout << "\nEncrypting message.." << endl;

    for (char c: message){
        size_t position = alphabet.find(c);
    if (position != string::npos) {
        char new_char {key.at(position)};
        encrpted_message += new_char;
    } else
        encrpted_message += c;
    }
    cout << "\nEncrypted message: " << encrpted_message << endl;

// Decryping a message
    string decrypted_message{};
    cout << "\nDecrypting message.. " << endl;

    for (char c: encrpted_message){
        size_t position = key.find(c);
        if(position != string::npos){
            char new_char{alphabet.at(position)};
            decrypted_message += new_char;
        }else
        {
            decrypted_message += c;
        }   
    }
    cout << "\nDecrypted message: " << decrypted_message << endl;

    cout << endl;
    return 0;
}