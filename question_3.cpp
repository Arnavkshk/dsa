#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int num=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='I'){
                num=num+1;
            }
            if(s[i]=='V'){
                 if(s[i-1]=='I'){
                    num=num+4;
                 }
                 else{
                     num=num+5;
                 }
            }
           
        //      if(s[i]=='X'){
        //              num=num+10;
        //     }
        //      if(s[i]=='L'){
        //              num=num+50;
        //     }
        //      if(s[i]=='C'){
        //              num=num+100;
        //     }
            
        //      if(s[i]=='D'){
        //              num=num+500;
        //     }
        //      if(s[i]=='M'){
        //              num=num+1000;
        //     }
        }
        cout<<num;
    return 0;
}