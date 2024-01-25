#include <iostream>
using namespace std;

int main(){
    int arr[100],size,element,flag=0;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter elemet to be found in the array: ";
    cin>>element;
    for(int i=0;i<size;i++){
        if(element==arr[i]){
        cout<<"element found at index: "<<i+1;
        flag=1;
        }
    }
    if(flag==0){
        cout<<"element not found in the array";
    }
    return 0;
}