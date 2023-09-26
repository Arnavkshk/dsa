#include <iostream>
using namespace std;

int main(){
    int n, temp=0;
    cin>>n;
    for(int i=0;i<=n;i+=2){
                temp=temp+i;
    }
        cout<<temp;
    return 0;
}