#include <iostream>
using namespace std;

int main(){int n,min,temp;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++){
        for(int j=1;j<n-1-i;j++){
            if(arr[i]>arr[j]){
                temp=arr[j];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }     
    }
    for (int i = 0; i < n; i++){
        cout<<arr[i];
    }
    
    return 0;
}