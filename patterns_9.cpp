#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while (i<=n){ 
        int space=0;
        while(space<=i){
            cout<<" ";
            space++;
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