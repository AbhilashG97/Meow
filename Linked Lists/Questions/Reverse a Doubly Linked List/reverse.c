#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
} NODE;

NODE * reverse(NODE *head)
{
    printf("Reverse");
    NODE *first, *last, *temp;
    last = head;
    first = head;

    temp = (NODE *)malloc(sizeof(temp));

    while (last != NULL)
    {
        last = last->next;
    }

    while (first != last)
    {
        temp->data = first->data;
        first->data = last->data;
        last->data = temp->data;
        first = first->next;
        last = last->prev;
    }
    return head;
}

void print(NODE *head)
{
    printf("print");
    NODE *temp = head;
    while (temp != NULL)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
}

NODE *insert(NODE *head, int data)
{
    printf("insert\n");
    NODE *newnode, *last, *temp;
    newnode = (NODE *)malloc(sizeof(NODE));
    newnode->data = data;
    temp = head;

    if (head != NULL)
    {
        while (temp != NULL)
        {
            last = temp;
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("%d", temp->data);
        last->next = newnode;
        newnode->prev = last;
    }
    else
    {
        head = newnode;
        head->next = NULL;
        head->prev = NULL;
        last = head;
    }
    return head;
}

int main()
{
    int n;
    int data, i;
    scanf("%d", &n);

    NODE *head, *reverse_list;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &data);
        head = insert(head, data);
    }

    reverse_list = reverse(head);
    print(reverse_list);
    return 0;
}
