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
        printf("%d=>", temp->data);
        temp = temp->link;
    }
    printf("NULL");
}

// Returns 1 if success, 
//         0 if failure.
int insertAtEnd(struct node **head, int position, int data)
{
	struct node *newnode, *last;
    newnode = (struct node *)malloc(sizeof(struct node));

    if(*head == NULL) 
    {
        if(position != 0) 
        {
            return 0;
        } 
        else 
        {
            head = last = newnode;
            return 1;
        }

    } 
    else 
    {
        
    }

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