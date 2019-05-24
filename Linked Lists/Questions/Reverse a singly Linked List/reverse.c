#include <stdlib.h>
#include <stdio.h>

struct Link
{
	int value;
	struct Link *next;
};

typedef struct Link node;

node *push(node *head, int value)
{
	node *l = malloc(sizeof(node));
	l->value = value;
	l->next = head;
	return l;
}

void print(node *head)
{
	node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->value);
		temp = temp->next;
	}
	printf("\n");
}

node *reverse(node *head)
{
	node *temp = head;
	node *reversed_list = (node *)malloc(sizeof(node));
	while (temp != NULL)
	{
		reversed_list = push(temp, temp->value);
		temp = temp->next;
	}
	return NULL;
}

int main()
{
	node *head = NULL;
	int n, arr[100], i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		head = push(head, arr[i]);
	}
	print(head);
	head = reverse(head);
}