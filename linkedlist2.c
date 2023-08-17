#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
typedef struct LinkedListNode LinkedListNode;

struct LinkedListNode {
    int val;
    LinkedListNode *next;
};

LinkedListNode* _insert_node_into_singlylinkedlist(LinkedListNode *head, int val) {
    if(head == NULL) {
        head = (LinkedListNode *) (malloc(sizeof(LinkedListNode)));
        head->val = val;
        head->next = NULL;
        
    }
    else {
        LinkedListNode *node = (LinkedListNode *) (malloc(sizeof(LinkedListNode)));
        node->val = val;
        node->next = head;
        head = node;
    }
    return head;
}

void print(LinkedListNode* head) {
    while(head!=NULL){
        printf("%d",head->val);
        if(head->next!=NULL){
            printf("->");
        }
        head=head->next;
    }
}

int main()
{
    int head_size = 0;

    LinkedListNode* head = NULL;

    scanf("%d\n", &head_size);
    for(int i = 0; i < head_size; i++) {
        int head_item;
        scanf("%d", &head_item);
        head = _insert_node_into_singlylinkedlist(head, head_item);



}
    print(head);
    
    return 0;
}