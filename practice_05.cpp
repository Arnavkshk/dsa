#include <iostream>
using namespace std;

int main(){
    int a, notes;
    cout<<"enter the amount: ";
    cin>>a;
 
    switch (100)
    {
    case 100:
       notes=a/100;
       cout<<"no of rupees 100 notes required = "<<notes<<endl;
       a=a%100;
    case 50:
        notes=a/50;
        cout<<"no of rupees 50 notes required = "<<notes<<endl;
        a=a%50;
    case 20:
        notes=a/20;
        cout<<"no of rupees 20 notes required = "<<notes<<endl;
        a=a%20;
    case 1:
        notes=a/1;
        cout<<"no of rupees 1 notes required = "<<notes<<endl;
        
        break;
    
    default:
        break;
    }

    return 0;
}