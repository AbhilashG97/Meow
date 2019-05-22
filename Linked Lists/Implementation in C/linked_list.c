#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *ptr;
};

struct node* insert_at_first(int data, struct node *head) 
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->ptr = head;
    head = newnode;

    return head;
}

struct node* insert(int index, int data, struct node *head) 
{
    int count = 0;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    struct node *temp, *prev;
    temp = head;
    while(temp != 0) 
    {
        count++;
        prev = temp;
        temp = temp->ptr;

        if(count == index) 
        {
            prev->ptr = newnode;
            newnode->ptr = temp;
            break;
        }
    }
    return head;
}

struct node* insert_after_value(int value, int data, struct node *head) 
{
    struct node *newnode, *prev;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    struct node *temp = head;
    while(temp != 0) 
    {
        prev = temp;
        temp = temp->ptr;

        if (temp->data == value) 
        {
            prev->ptr = newnode;
            newnode->ptr = temp;
            break; 
        }
    }
    return head;
}

int main()
{
    struct node *first, *last, *newnode;
    first = 0;
    for (int i = 0; i < 5; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        if (first == 0)
        {
            first = last = newnode;
        }
        else
        {
            last->ptr = newnode;
            last = newnode;
        }
    }

    first = insert_at_first(100, first);
    first = insert(3, 200, first);
    first = insert_after_value(3, 300, first);

    last->ptr = 0;
    struct node *temp;
    temp = first;
    int sum = 0;
    int even[5];
    int odd[5];
    int i = 0, in_even = 0, in_odd = 0;
    while (temp != 0)
    {
        printf("%d->", temp->data);
        sum += temp->data;

        if (temp->data % 2 == 0)
        {
            even[in_even++] = temp->data;
        }
        else
        {
            odd[in_odd++] = temp->data;
        }
        i++;
        temp = temp->ptr;
    }
    printf("NULL\n");
    printf("\nSum is %d\n\n", sum);

    printf("Even numbers\n");
    for (int j = 0; j < in_even; j++)
    {
        printf("%d ", even[j]);
    }

    printf("\n\nOdd numbers\n");
    for (int j = 0; j < in_odd; j++)
    {
        printf("%d ", odd[j]);
    }
}