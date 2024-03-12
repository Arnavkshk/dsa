//linked list
#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

void insertathead(Node* &head,int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void insertattail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}
void insertatposition(Node* &head,Node* &tail,int position,int d){
    Node* temp = head;
    if(position == 1){
        insertathead(head,d);
        return;
    }
    if(temp->next==NULL){
        insertattail(tail,d);
        return;
    }
    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    Node* nodetoinsert = new Node(d);
    nodetoinsert -> next = temp->next;
    temp->next = nodetoinsert;
}

void deletenode(int position,Node* &head){
    if(position == 1){
        Node* temp = head;
        head = head ->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next=NULL;
        delete curr;
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertathead(head,12);
    print(head);
    insertattail(tail,20);
    print(head);
    insertatposition(head,tail,4,90);
    print(head);
    deletenode(4,head);
    print(head);
    return 0;
}