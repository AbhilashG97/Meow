#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct List
{
    struct node *head;
};

struct Graph
{
    int V;
    struct List *array;
};

struct node *create(int destination)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = destination;
    new_node->next = NULL;
    return new_node;
}

struct Graph *createGraph(int nodes)
{
    struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
    graph->V = nodes;
    graph->array = (struct List *)malloc(sizeof(struct List));
    int i;
    for (i = 0; i < nodes; ++i)
    {
        graph->array[i].head = NULL;
    }

    return graph;
}

void add_edge(struct Graph *graph, int src, int dest)
{
    struct node *new_node = create(dest);
    new_node->next = graph->array[src].head;
    graph->array[src].head = new_node;

    new_node = create(src);
    new_node->next = graph->array[dest].head;
    graph->array[dest].head = new_node; 
}

void print_graph(struct Graph *graph)
{
    int i;
    for(i = 0; i < graph->V; ++i) 
    {
        struct node* p = graph->array[i].head;
        printf("\n Adjacency List of vertex %d\n\n Head --- ", i);
        while(p != NULL) 
        {
            printf("%d ->", p->data);
        }
        printf(" NULL\n");
    }
}

int main() 
{
    int nodes, s, d, choice=1;
    printf("Enter the no of nodes\n");
    scanf("%d", &nodes);
    struct Graph *graph = createGraph(nodes);
    while(choice) 
    {
        scanf("%d %d", &s, &d);
        add_edge(graph, s, d);
        printf("\nDo you want to continue? press 1\n");
        scanf("%d", &choice);
    }
    print_graph(graph);
    return 0;
}