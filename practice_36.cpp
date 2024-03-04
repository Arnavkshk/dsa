// binary search using recursion
#include <iostream>
using namespace std;

bool BinarySearch(int arr[],int start,int end,int key){
    if(start>end) return false;
    int mid = start+(end-start)/2;

    if(arr[mid]==key) return true;

    if(arr[mid]<key){
      return  BinarySearch(arr,mid+1,end,key);
    }
    else{
       return BinarySearch(arr,start,mid-1,key);
    }

}

int main(){
    int arr[6]={2,4,6,8,10,12};
    int end=5;
    int start=0;
    int key=10;
    cout<<BinarySearch(arr,start,end,key);
    return 0;
}