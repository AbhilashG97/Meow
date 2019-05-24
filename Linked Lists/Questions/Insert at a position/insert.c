#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node
{
	int num;
	struct node *link;
};

typedef struct node NODE;

void display(NODE *head)
{
    struct node *temp = head;
    while(temp != 0) 
    {
        printf("%d=>", temp->num);
        temp = temp->link;
    }
    printf("NULL");
}

// Returns 1 if success, 
//         0 if failure.
int insertAtEnd(struct node **head, int position, int data)
{
    NODE *new_node;
    new_node = (NODE *)malloc(sizeof(struct node));
    new_node->num = data;
    if(position == 0) 
    {
        new_node->link = *head;
        *head = new_node;
        return 1;
    }

    if (*head == NULL) 
    {
        return 0;
    }

    int i;
    NODE *node = *head;
    for(int i=1; i<=position; i++) 
    {
        if(node == NULL) 
        {
            return 0;
        }
        node = node->link;
    }
    NODE *temp;
    temp = node->link;
    node->link = new_node;
    new_node->link = temp;
    return 1;
}

int main()
{
  int i, n, tmp, pos;
  NODE *head = NULL;
  scanf("%d",&n);
  for(i = 0; i < n; i++)
  {
	  scanf("%d %d", &pos, &tmp);
	  if(0 == insertAtEnd(&head, pos, tmp))
      {
        printf("Failed to insert\n");
      }
  }
  display(head);
  return 0;
}