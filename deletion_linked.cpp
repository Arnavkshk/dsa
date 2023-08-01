#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

void traversing(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout<<"element:"<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

struct  node * deleteFirst(struct node * head){
    struct node * ptr = head;
    head=head->next;
    free(ptr);
    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    head->data = 7;
    head->next = second;
    second->data = 15;
    second->next = third;
    third->data = 23;
    third->next = fourth;
    fourth->data=50;
    fourth->next = NULL;
    cout<<"liniked list before deletion"<<endl;
    traversing(head);
    head=deleteFirst(head);
    cout<<"liniked list after deletion"<<endl;
    traversing(head);
    return 0;
}