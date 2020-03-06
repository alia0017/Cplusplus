/**
 * Declare Classes and Objects
 */
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
public:
    //attributes
    string name;
    int health;
    int xp;

    //methods
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl; };
    bool is_dead();
};

class Account {
public:
    //attributes
    string name;
    double balance;

    //methods
    bool deposit(double bal) { balance += bal; cout << "In deposit" << endl; }
    bool withdraw(double bal) { balance -= bal; cout << "In withdraw" << endl; }
};

int main(){
    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000.0;

    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);

    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi there");

    //emeney is a pointer to a player object
    Player *enemy = new Player;
    (*enemy).name = "Enemey";
    (*enemy).health = 100;
    enemy->xp = 15;
    enemy->talk("I will destroy you!");
    delete enemy;

    return 0;
}