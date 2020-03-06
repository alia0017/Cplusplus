/**
 * Constructor initialization Lists
 * A better way of assigning the class AS the class is being made instead of after the fact
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
    : name{"None"}, health{0}, xp{0} {
}

Player::Player(std::string name_val) 
    : name{name_val}, health{0}, xp{0} {
}

Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
}

int main(){
    //Create objects of Player
    Player empty;
    Player frank {"Frank"};
    Player villian {"Villain", 100, 55};

    cout << endl;
    return 0;
}