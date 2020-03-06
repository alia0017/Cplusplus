/**
 * Delegate Constructor
 * Sends the constructor initialization onto just one constructor
 */
#include <iostream>

using namespace std;

class Player{
    //The order of the initialization follows here:
private:
    std::string name;
    int health;
    int xp;
public:
//Overloaded Constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

Player::Player() 
    : Player{"None", 0, 0} {
        cout << "No-args constructor" << endl;
}

Player::Player(std::string name_val) 
    : Player{name_val, 0, 0} {
            cout << "One-args constructor" << endl;
}

//Delegating to this constructor
Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
            cout << "Three-args constructor" << endl;
}

int main(){
    //Create objects of Player
    Player empty;
    Player frank {"Frank"};
    Player villian {"Villain", 100, 55};

    cout << endl;
    return 0;
}