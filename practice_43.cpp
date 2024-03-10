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
    Hero(){
        cout<<"constructor called"<<endl;
    }
    Hero(int health,char level){
        this -> health = health;
        this -> level = level;
    }
    void print(char level,int health){
        cout<<level<<endl;
        cout<<health<<endl;
    }

};

int main(){
    Hero ramesh;
    Hero a;
    Hero *b = new Hero;
    b->sethealth(30);
    cout<<"health of b is "<<b->health<<endl;
    ramesh.sethealth(20);
    ramesh.level = 'A';
    cout<<"health is "<<ramesh.gethealth()<<endl;
    cout<<"level is "<<ramesh.level<<endl;
    a.print('b',20);
    return 0;
}