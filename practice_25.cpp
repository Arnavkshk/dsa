//pointers

#include <iostream>
using namespace std;

void printpointer(int *p){
    cout<<*p<<endl;
}
void updatepointer(int *p){
    *p=*p+2;
}

int main(){
    int num= 5;
    int *p = &num;
    printpointer(p);
    updatepointer(p);
    printpointer(p);

    return 0;
}