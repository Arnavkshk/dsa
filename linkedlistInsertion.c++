#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void traversing(struct node *ptr)
{
    while (ptr != NULL){
        cout<<"element: "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

struct node * insertAtFirst(struct node *head, int data){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr -> next= head ;
    ptr-> data=data;
    return ptr;
    }
struct node * insertAtEnd(struct node *head, int data){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr -> data= data ;
    struct node * p = head;

    while (p->next!=0){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
    

    ptr-> data=data;
    return ptr;
    }

struct node * insertAtIndex(struct node *head, int data, int index){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    struct node * p = head;
    int i=0;
    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
    
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    head->data = 7;
    head->next = second;
    second->data = 15;
    second->next = third;
    third->data = 234;
    third->next = NULL;
    traversing(head);
    cout<<"new linked lists"<<endl;
    cout<<"inserting at first"<<endl;
    head=insertAtFirst(head,56);
    traversing(head);
    cout<<"inserting at index"<<endl;
    head=insertAtIndex(head,50,1);
    traversing(head);
    cout<<"inserting in end"<<endl;
    head=insertAtEnd(head,56);
    traversing(head);
    return 0;
}