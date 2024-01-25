#include <iostream>
using namespace std;

int main(){
    int i;
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
        int temp=arr[m+1];
        arr[m+1]=arr[n-1];
        arr[n-1]=temp;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}