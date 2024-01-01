#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int value=i;
        while(j<=i){
            cout<<i<<" ";
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

//1
//23
//345
//4567