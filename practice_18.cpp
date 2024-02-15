#include <iostream>
using namespace std;

//program for merge sorted array

int mergesorted(int arr1[],int n,int arr2[],int m,int arr3[]){



}

void printarr(int arr3[],int n){
    for(int i=0;i<n;i++){
        cout<<arr3[i]<<" ";
    }
}

int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[4]={2,4,6,8};
    int arr3[9]={0};

    mergesorted(arr1,5,arr2,4,arr3);

    printarr(arr3,9);

    return 0;
}