#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){

    int start=0;
    int end=size-1;
    int mid = (start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;

}

int main(){
   int n,a;
   int arr[100];
   cout<<"enter size of array ";
   cin>>n;
   cout<<"enter elements of array ";
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   cout<<"enter element to be found ";
   cin>>a;
   int index=binarySearch(arr,n,a);
    if(index==-1){
        cout<<"element not found ";
    }
    cout<<"element found at index "<<index;


    return 0;
}