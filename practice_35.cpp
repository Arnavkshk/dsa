//linear search using recursion 
#include <iostream>
using namespace std;

bool Linearsearch(int arr[],int size,int key){
    if(size==0) return false;
    if(arr[0]==key) return true;
    else{
        int ans;
        ans=Linearsearch(arr+1,size-1,key);
        return ans;
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int key=1;
    int ans = Linearsearch(arr,size,key);
    if(ans){
        cout<<"present";
    }
    else{
        cout<<"absent";
    }
    return 0;
}