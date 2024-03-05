// merge sort using recursion
#include <iostream>
using namespace std;

void merge(int arr[],int s,int e){
    int m = (s+e)/2;
    int len1= m-s+1;
    int len2=e-m;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainarrayindex = s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainarrayindex++];
    }
    mainarrayindex=m+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainarrayindex++];
    }
    int index1=0;
    int index2=0;
    mainarrayindex=s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainarrayindex++]=first[index1++];
        }
        else{
            arr[mainarrayindex++]=second[index2++];
        }
    }
    while(index1<len1){
        arr[mainarrayindex++]=first[index1++];
    }
    while(index2<len2){
        arr[mainarrayindex++]=second[index2++];
    }
    delete []first;
    delete []second;    
}

void mergesort(int arr[],int start,int end){
    if(start>=end) return;

    int mid = (start+end)/2;

    mergesort(arr,start,mid);

    mergesort(arr,mid+1,end);

    merge(arr,start,end);

}

int main(){
    int arr[5]={5,3,2,1,0};
    int start=0;
    int end = 4;
    mergesort(arr,start,end);

    for(int i=0;i<end+1;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}