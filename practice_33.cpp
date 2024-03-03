// to tell if a given array is sorted or not using recursion
#include <iostream>
using namespace std;

bool issorted(int n,int arr[]){
    if(n==0||n==1) return true;
    
    if(arr[0]>arr[1]) return false;

    else{
        bool ans = issorted(n-1,arr+1);
        return ans;
    }

}

int main(){
    int n=10;
    int arr[10]={12,14,34,56,67,78,90,99,101,120};
    cout<<issorted(n,arr);
    return 0;
}