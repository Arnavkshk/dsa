// OOPS in c++
#include <iostream>
using namespace std;

class Hero{
public:
    int health;
    char level;
    

};

int main(){
    Hero ramesh;
    ramesh.health =70;
    ramesh.level = 'A';
    cout<<"health is "<<ramesh.health<<endl;
    cout<<"level is "<<ramesh.level<<endl;

    return 0;
}