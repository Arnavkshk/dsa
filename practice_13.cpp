#include <iostream>
using namespace std;

long long int sqrtInteger(int arr[],int n,int key){

    int s=0;
    int e=n;
    long long int mid =  s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return -1;

}

int main(){
    
    return 0;
}