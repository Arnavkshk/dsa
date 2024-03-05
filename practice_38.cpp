//check palindrome using recursion
#include <iostream>
using namespace std;

bool ispalindrome(string str,int i,int j){
    if(i>=j)return true;
    if(str[i]!=str[j]) return false;
    else{
        i++;
        j--;
        return ispalindrome(str,i,j);
    }
}

int main(){
    string str = "oppo";
    int i=0;
    int j=str.length()-1;
    cout<<ispalindrome(str,i,j);
    return 0;
}