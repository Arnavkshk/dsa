//find power of a number using recursion
#include <iostream>
using namespace std;

int power(int a,int b){
    if(a==0) return 0;
    if(b==0) return 1;
    if(b==1)return a;
    int ans = power(a,b/2);
    if(b&1){
        ans = a*ans*ans;
    }
    else {
        ans = ans*ans;
    }
    return ans;
    
}

int main(){

    int a,b;
    cin>>a>>b;
    int ans = power(a,b);
    cout<<ans;

    return 0;
}