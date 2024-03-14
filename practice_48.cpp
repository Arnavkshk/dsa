// circular linked list
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for "<<value<<endl;
    }
};

void insertnode(Node* &tail,int element,int d){
    if(tail == NULL){
        Node* newnode = new Node(d);
        tail = newnode;
        newnode->next=newnode;
    }
    else{
        Node* curr = tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        Node* temp = new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void print(Node* tail){
    Node* temp = tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail->next!=temp){
        cout<<tail->data<<" ";
        tail = tail->next;
    }
}

int main(){
    return 0;
}