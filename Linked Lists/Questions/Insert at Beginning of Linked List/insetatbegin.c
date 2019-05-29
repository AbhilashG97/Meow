#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;          
    struct node *next; 
}*head;

void createList(int n);
void insertNodeAtBeginning(int data);
void displayList();

int main()
{
    int n, data;
    scanf("%d", &n);
    createList(n);
    scanf("%d", &data); 
    insertNodeAtBeginning(data);
    displayList();
    return 0;
}

void createList(int n)
{
    if( n == 0) 
    {
        exit(0);
    }
    
    int data;
    struct node *newnode, *last;
    
    head = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &data);
    head->data = data;
    last = head;
    n--;
    while(n-- > 0) 
    {
        scanf("%d", &data);
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = data;
        last->next = newnode;
        last = newnode;
    }
}

void insertNodeAtBeginning(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    
    if(head != NULL) {
        temp->next = head;
        head = temp;
    } 
    else 
    {
        head = temp;
    }
}

void displayList()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("%d ", temp->data); 
            temp = temp->next;                 
        }
    }
}