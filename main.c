#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node *head;
struct Node *reverse( int k)
{
    struct Node* current = head;
    struct Node* next = NULL;
    struct Node* prev = NULL;
    int count = 0;
    while (current != NULL && count < k)
    {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    if (next !=  NULL)
       head->next = reverse(k);
    return prev;
}
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d  ", node->data);
        node = node->next;
    }
}
void insert(int val)
{
   struct Node* new_node =
            (struct Node*) malloc(sizeof(struct Node));
    struct Node * temp;
    new_node->data  = val;

    if(head==NULL)
    {
        new_node->next = NULL;
        head = new_node;
    }
    else{
            temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->next = NULL;
    }
}
int main()
{

    insert(1);
    insert(2);
    insert(3);
    printList(head);
    head = reverse(3);
    printList(head);
    return 0;
}
