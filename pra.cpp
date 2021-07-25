#include <iostream>
using namespace std;
name
int main() {    
    int number;

    cout << "Welcome to the Game.. " <<endl;
    cin >> number;

    cout << "You entered " << number;    
    return 0;
}

void init () {
    
    string playerName; 
    double playerAttackPwr, playerDefensePwr ;
    cout << " Please Assign the player's info:-" <<endl;
    cout << "Please enter the Player's name... " <<endl;
    cin >> playerName; 
   cout << "Now, please enter the Player's Attack Power... " <<endl;  

}



class PLAYER {

    public:
        string playerName; 
        double  attackPower, defensePower;
        bool turn;
};

class GAME {
    public: 
        double Attack (double attackerPower, double defenderPower) {
            double battleOutcome = attackerPower - defenderPower; 
            return  battleOutcome;
        }
};