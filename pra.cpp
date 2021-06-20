#include <iostream>
using namespace std;

int main() {    
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    cout << "You entered " << number;    
    return 0;
}


class PLAYER {

    public:
        string playerName; 
        double  attackPower, defensePower;
        bool turn;
};

class GAME {
    public: 
        void Attack (double attackerPower, double defenderPower) {
            double battleOutcome = attackerPower - defenderPower; 
            return  battleOutcome;
        }
};