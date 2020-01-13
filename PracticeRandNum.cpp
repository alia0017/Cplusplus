#include <iostream>
#include <cstdlib> //required for rand() c standard library
#include <ctime> //required for time()

using namespace std;

int main() {

    int random_num {};
    size_t count {10};  //number of random numbers to generate
    int min{1};       //lower bound (inclusive)
    int max{6};     //upper bound (inclusive)

    //If you don't seed the generator you will get the same requence random numbers every run
    //Seed the random number generator
    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr));

    for(size_t i{1}; i<=count; ++i){
        random_num = rand() % max + min; // generate a random number [min, max]
        cout << random_num << endl;
    }
    
    cout << endl;
    return 0;
}


