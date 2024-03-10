// data encapsulation
#include <iostream>
using namespace std;

class Student{
    private:
    string name;
    int age;
    int height;

    public:
    void setvals(string name, int age) {
        this->name = name;
        this->age = age;
    }
    string getname(){
        return name;
    }
    int getage() {
        return age;
    }
    void print(string name,int age,int height){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<height<<endl;
    }
};

int main() {
    Student first;
    first.setvals("ace",12);
    cout<<first.getage()<<endl;
    cout<<first.getname()<<endl;
    first.print("ace",12,122);
    return 0;
}
