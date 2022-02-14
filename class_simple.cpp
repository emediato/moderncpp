#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Character {
    private:
        int health;
    public:
        Character(){health=100;}
        int getHealth(){return health;}
        void getHurt(int hurtValue){health-=hurtValue;}
};


int main(){
    Character player1;
    cout << player1.health << endl;
    player1.getHurt(10);
    cout << player1.health << endl;

    return 0;
}