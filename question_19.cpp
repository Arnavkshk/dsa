#include <iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if(ch>='a'&&ch<='z'){
        cout<<"This is lowercase";
    }
    else if(ch>='A'&&ch<='Z')
    {
        cout<<"this is uppercase";
    }
    else if(ch>='0'&&ch<='9')
    {
        cout<<"this is numeric";
    }
    else{
        cout<<"invalid character";
    }

    return 0;
}