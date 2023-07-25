#include <stdio.h>

void display(int arr[],int n){
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[],int size,int element,int capacity,int index){
    if(size>=capacity){
        return -1;
    }
    for(int i=size;i>=index;--i){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}

int main()
{
    int arr[100]={1,3,5,6,8,22};
    int size=4,element=50,index=3;
    display(arr,size);
    indInsertion(arr,size,element,100,index);
    size++;
    display(arr,size);
    return 0;
}