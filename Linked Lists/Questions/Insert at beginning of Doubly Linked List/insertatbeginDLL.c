#include <stdio.h>
#include <malloc.h>

typedef struct Node
{
	struct Node *prev;
	int info;
	struct Node *next;
} node;

void createdub(node **, node **);
void insertAtBeg(node **, node **, int);
void display(node *);

int main()
{
	int ch, item, pos;
	node *start, *end;
	start = end = NULL;
	createdub(&start, &end);
	scanf("%d", &item);
	insertAtBeg(&start, &end, item);
	display(start);
	return 0;
}

void createdub(node **start, node **end)
{
	*start = (node *)malloc(sizeof(node));
	(*start)->next = *end;
	*end = (node *)malloc(sizeof(node));
	(*end)->prev = *start;
}

void insertAtBeg(node **start, node **end, int item)
{
	node *new_node = (node *)malloc(sizeof(node));
	new_node->info = item;
	new_node->next = *start;
	(*start)->prev = new_node;
	*start = new_node;
}

void display(node *start)
{
	while (start != NULL)
	{
		printf("%d\t", start->info);
		start = start->next;
	}
}