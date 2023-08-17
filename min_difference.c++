#include <iostream>
using namespace std;

int main(){
    int n,min;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(n!=0){
                min=abs(arr[i]-arr[j]);
            }
            if(abs(arr[i+1]-arr[j+1])<min){
                min=abs(arr[i+1]-arr[j+1]);
            }
        }
    }
    cout<<min;
    
    return 0;
}