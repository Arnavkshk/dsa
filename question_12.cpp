#include <iostream>
using namespace std;

bool linearsearch(int arr[],int size,int n){
    for(int i=0;i<size;i++){
        if(arr[i]==n){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
    int size=sizeof(arr)/sizeof(int);
    int n;
    cout<<"enter the element to be searched"<<endl;
    cin>>n;
    bool found =linearsearch(arr,size,n);
    if(found){
        cout<<"element found";
    }
    else{
        cout<<"not found";
    }
    return 0;
}