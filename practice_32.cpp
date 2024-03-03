//fibonnacci series using recursion
#include <iostream>
using namespace std;

int fibbonnacci(int n){
    if(n==0){
        return 0;
    } 
    if(n==1) {
        return 1;
    }
    int ans=fibbonnacci(n-1)+fibbonnacci(n-2);
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<fibbonnacci(n);
    return 0;
}