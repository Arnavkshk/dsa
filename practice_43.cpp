// OOPS in c++
#include <iostream>
using namespace std;

class Hero{
private:
public:
    int health;
    char level;

    int gethealth(){
        return health; 
    }
    void sethealth(int h){
        health = h;
    }

};

int main(){
    Hero ramesh;
    Hero *b = new Hero;
    b->sethealth(30);
    cout<<"health of b is "<<b->health<<endl;
    ramesh.sethealth(20);
    ramesh.level = 'A';
    cout<<"health is "<<ramesh.gethealth()<<endl;
    cout<<"level is "<<ramesh.level<<endl;

    return 0;
}