#include <iostream>
using namespace std;

int main(){
    int temp,size;
    int arr[100];
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size/2;i++){
        temp=arr[i];
        arr[i]=arr[size-i];
        arr[size-i]=temp;
    }
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}