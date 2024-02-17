#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n =3;
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);

    vector<int> temp(arr.size());
    for(int i=0;i<arr.size();i++){
        temp[(i+n)%arr.size()]=arr[i];
    }
    arr=temp;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<< " ";
    }

    return 0;
}