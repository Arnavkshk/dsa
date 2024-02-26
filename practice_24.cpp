#include <iostream>
using namespace std;

//pointers

int main(){
    int num = 5;
    cout<<num<<endl;
    cout<<"address of num is "<<&num<<endl;
    int *ptr = &num;
    cout<<++(*ptr);
    return 0;
}