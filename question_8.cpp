#include <iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}

int main(){
    int a,x,y;
    cin>>a;
    int summ[a];
    for(int i=0;i<a;i++){
        cin>>x>>y;
        summ[i]=sum(x,y);
    }
    for(int i=0;i<a;i++){
        cout<<summ[i]<<endl;
    }
    return 0;
}