#include <iostream>
using namespace std;

int main(){
    int a, count=0;
    cin>>a;
    while(a!=0){
        if(a&1){
            count++;
        }
    a=a>>1;
    }
    cout<<count;
    return 0;
}