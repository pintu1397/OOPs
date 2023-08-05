#include<iostream>
using namespace std;

class Player
{
private:
static int count;
public:
// for static data members
//static int count;
    Player() {
        count++;
    }
    
    ~Player() {
        count--;
    }
    //static member
    static int getCount(){
        return count;
    }
};

int Player::count = 0;

int main() {
    Player p1,p2,p3;
    
    cout << Player::getCount() << " " << endl;
    
    // Player p2;
    // cout << Player::getCount << " " << endl;
    
    return 0;
}
