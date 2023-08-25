#include <iostream>
using namespace std;

int main(){
    int n,sum=0,prod=1;
    cin>>n;

    while(n!=0){
        int rem=n%10;
        prod=prod*rem;
        sum=sum+rem;
        n=n/10;
    }
    cout<<prod-sum;
    return 0;
}