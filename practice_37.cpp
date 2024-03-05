// reverse a string using recursion

#include <iostream>
using namespace std;

void reverse(string &arr,int i, int j){
    if(i>j) return ;
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
    reverse(arr,i,j);
}

int main(){

    string arr = "helloworld";
    int i=0;
    int j=arr.length()-1;
    reverse(arr,i,j);
    cout<<arr;
    
    return 0;
}