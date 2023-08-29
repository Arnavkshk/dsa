#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans = 1;
    for(int i=0;i<30;i++){
        int ans=ans*2;
        if(ans == n){
            cout<<"true";
        }
        else {
            cout<<"false";
        }
    }
    return 0;
}