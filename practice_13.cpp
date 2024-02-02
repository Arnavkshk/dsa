#include <iostream>
using namespace std;

long long int sqrtInteger(int arr[],int n,int key){

    int s=0;
    int e=n;
    long long int mid =  s+(e-s)/2;
    long long int ans=-1;
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
    
    return 0;
}