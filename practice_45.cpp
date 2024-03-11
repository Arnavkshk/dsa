// inheritence
#include <iostream>
using namespace std;

class Human{
    public:
    int height;
    int weight;
    int age;
    public:
    int getage(){
        return this->age;
    }
    void setweight(int w){
        this->weight = w;

    }
};

class Male : public Human{
    public:
    string color;
    void sleep(){
        cout<<"male is sleeping"<<endl;
    }
};

int main(){
    
    Male object1;
    object1.age=20;
    cout<<object1.getage()<<endl;
    object1.height=170;
    cout<<object1.height<<endl;
    object1.setweight(60);
    cout<<object1.weight<<endl;
    object1.color="black";
    cout<<object1.color<<endl;
    object1.sleep();
    return 0;
}