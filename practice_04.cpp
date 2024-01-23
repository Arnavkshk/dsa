#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter the two values to perform operation"<<endl;
    cin>>a>>b;
    cout<<"enter the operation you want to perform"<<endl;

    char op;
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<a+b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;
    case '%':
        cout<<a%b;
        break;
    case '-':
        cout<<a-b;
        break;
    
    default:
    cout<<"invalid operatrion";
        break;
    }

    return 0;
}