#include <iostream>
using namespace std;

int sum_array(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    int arr[200],size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<sum_array(arr,size);
    return 0;
}