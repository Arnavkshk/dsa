#include <iostream>
using namespace std;

bool ispalindrome(char arr1[],int n){
    char arr2[10];
    for(int i=0;i<n;i++){
        arr2[i]=arr1[i];
    }
    int s=0;
    while(s<n-1){
        swap(arr1[s++],arr1[n--]);
    }
    for(int i=0;i<n;i++){
        if(arr1[i]==arr2[i]){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n=10;
    char name[10];
    cout<<"enter the string "<<endl;
    cin>>name;
    cout<<ispalindrome(name,n);
   
    return 0;
}