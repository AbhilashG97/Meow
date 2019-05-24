#include <stdio.h>
#include <malloc.h>
#include <string.h>

struct Node {
    int data;
    struct Node *next;
};

typedef struct Node node;

node * insert(int data, node *head) 
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = data;
    temp->next = head;
    head = temp;
    return head;
}

int is_cycle_present(node *head, int size) 
{
    int counter = 0;
    node *temp = head;
    while(temp != NULL) 
    {
        if(counter > size) {
            return 1;
        } 
        temp = temp->next;
        counter++;
    }
    return 0;
}

int main()
{
    int n, element;
    node *head = NULL;
    scanf("%d", &n);
    for(int i=0; i<n; i++) 
    {   
        scanf("%d", &element);
        head = insert(element, head);
    }
    if (is_cycle_present(head, n)) 
    {
        printf("yes");
    } else 
    {
        printf("no");
    }
    return 0;
}