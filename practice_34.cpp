//to add digits in an array using recursion
#include <iostream>
using namespace std;

int getsum(int arr[],int size){
    if(size<=0) return 0;
    else{
       return(getsum(arr+1,size-1)+arr[size-1]);
    }
}

int main(){
    int arr[3]={22,22,22};
    int size=3;
    cout<<getsum(arr,size);
    return 0;
}