#include <iostream>
using namespace std;

int main(){
    int temp,size;
    int arr1[100];
    cin>>size;
    for(int i=0;i<size;i++){
        
    }

    for(int i=0;i<size;i=i+2){
            temp=arr1[i];
            arr1[i]=arr1[i+1];
            arr1[i+1]=temp;
    }
    for(int i=0;i<5;i++){
        cout<<arr1[i]<<" ";
    }
    return 0;
}