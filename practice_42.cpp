// quick sort using recursion
#include <iostream>
using namespace std;

int partition(int arr[],int start,int end){
    int pivot = arr[start];
    int cnt = 0;
    for(int i=start+1;i<end;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    int pivotindex = start+cnt;
    swap(arr[pivotindex],arr[start]);
    int i=start,j=end;
    while (i<pivotindex && j>pivotindex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
    
}

void quicksort(int arr[],int start,int end){
    if(start>=end) return ;
    int pivot = partition(arr,start,end);
    quicksort(arr,start,pivot-1);
    quicksort(arr,pivot+1,end);
}

int main(){
    int arr[6]={3,1,6,7,9,9};
    int s=0;
    int n=6;
    quicksort(arr,s,n-1);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}