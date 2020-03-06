/**
 * Default constructor parameters
 * Can not always use - situational 
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
    //Default constructor parameters
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
};

//Overlaoded Constructor
Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
            cout << "Three-args constructor" << endl;
}

int main(){
    //Create objects of Player
    Player empty;
    Player frank {"Frank"};
    Player hero {"Hero", 100};
    Player villian {"Villain", 100, 55};

    cout << endl;
    return 0;
}