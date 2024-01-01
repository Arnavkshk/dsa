#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while (i<=n){ 
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;            
        }
        int space = j;
        while(space<=n){
            cout<<"*";
            space=space+1;
        }
        int space1=1;
        while(space1<=i-1){
            cout<<"*";
            space1=space1+1;
        }
        int nice=1;
        int value=n;
        while(nice<=n-i+1){
            cout<<value-i+1;
            nice++;
            value--;
       
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}