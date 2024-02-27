#include <iostream>
using namespace std;

//pointers

int main(){
    int num = 5;
    cout<<num<<endl;
    int *ptr = &num;
    cout<<"address of num is "<<ptr<<endl;
    cout<<*ptr<<endl;


    return 0;
}