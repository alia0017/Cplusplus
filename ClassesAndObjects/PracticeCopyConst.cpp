/**
 * Copy Constructor - Object Copy
 * When it's required and when not to be used
 * Shallow copy / deep copy
 */
#include <iostream>

using namespace std;

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    //Getters
    std::string get_name() { return name; }
    int get_health() { return health; }
    int get_xp() { return xp; }

    //Constructor
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);

    //Copy Constructor
    Player(const Player &source);
    //Destructor
    ~Player() { cout << "Destructor called for: " + name << endl;}
};

//Overloaded Constructor
Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
        cout << "Three-args constructor for " + name << endl;
    }

//Copy Constructor
Player::Player(const Player &source)
    : name(source.name), health(source.health), xp(source.xp){
        cout << "Copy constructor - made a copy of: " << source.name << endl;
    }

//Expected by value
void display_player(Player p){
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
    cout << "XP: " << p.get_xp() << endl;
}

int main(){
    Player empty {"AAAAAAAAAA", 100, 50};
    Player new_obect {empty};

    display_player(empty);

    Player frank {"Frank"};
    Player hero {"Hero", 100};
    Player villain {"Villain", 100, 20};

    cout << endl;
    return 0;
}