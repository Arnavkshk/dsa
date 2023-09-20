#include <iostream>
using namespace std;

void swap(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){

    int even[6]={3,4,2,1,4,5};
    int odd[5]={3,4,5,2,1};
    swap(even,6);
    printarray(even,6);
    swap(odd,5);
    printarray(odd,5);

    return 0;
}