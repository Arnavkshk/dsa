// implementation of stack and some functions on stack
#include <iostream>
#include<stack>
using namespace std;

class Stack{
    public:
        int *arr;
        int top;
        int size;
    Stack(int size){
        this->size= size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflown"<<endl;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack is empty";
            return -1;
        }
    }
    bool isempty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    
    Stack st(5);
    st.push(22);
    st.push(8);
    st.push(100);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;




    return 0;
}