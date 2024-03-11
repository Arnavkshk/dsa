// inheritence
#include <iostream>
using namespace std;

class human{
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

class male : public human{
    public:
    string color;
    void sleep(){
        cout<<"male is sleeping"<<endl;
    }
};

int main(){
    


    return 0;
}