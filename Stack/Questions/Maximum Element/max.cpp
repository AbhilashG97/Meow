#include <iostream>
#include <malloc.h>

using namespace std;

struct node
{
	int data;
	struct node *next;
};

node *push(node *head, int &item)
{
	struct node *newnode, *last;
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = item;
	if (head == 0)
	{
		head = last = newnode;
	}
	else
	{
		last->next = newnode;
		last = newnode;
	}
	last->next = 0;
	return head;
}
node *display(node *head)
{
	struct node *temp;
	cout << "display";
	temp = head;
	while (temp != 0)
	{
		cout << temp->data;
		temp = temp->next;
	}
	return NULL;
}

node *delete_node(node *head)
{
	struct node *temp, *prev;
	temp = head;
	prev = temp;
	while (temp != 0)
	{
		prev = temp;
		temp = temp->next;
	}
	prev->next = NULL;
	free(temp);
	return NULL;
}

int main()
{
	struct node *head, *top;
	head = NULL;
	int T, item, n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> T;
		switch (T)
		{
		case 1:
			cin >> item;
			head = push(head, item);
			break;
		case 2:
			cin >> item;
			delete_node(head);
			break;
		case 3:
			cin >> item;
			display(head);
			break;
		}
	}

	return 0;
}
