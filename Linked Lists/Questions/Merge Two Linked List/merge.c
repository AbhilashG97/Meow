#include <stdio.h>
#include <malloc.h>
#include <string.h>
#define MAX_SIZE 20
struct List 
{
    int element;
    struct List *next;
};
typedef struct List* LIST;
LIST init() {
    LIST list = (LIST) malloc(sizeof(struct List));
    list->next = NULL;
}
void insert(LIST list, int n, int index) {
    LIST node = init();
    node->element = n;
    int i;
    for (i = 0; i < index && list != NULL; i++) {
        list = list->next;
    }
    node->next = list->next;
    list->next = node;
}
void print(LIST list) {
    list = list->next;
    while (list != NULL) {
        printf("%d ", list->element);
        list = list->next;
    }
    printf("\n");
}
LIST merge(LIST l1, LIST l2)
{
    // Type your code
}
int main() {
    int n, m;
    int x, i;
    char command[10];
    LIST l1;
	LIST l2;
	LIST l3;
    scanf("%d %d", &m, &n);
    l1 = init();
	l2 = init();
    for (i = 0; i < m; i++) {
		scanf("%d", &x);
		insert(l1, x, i);
    }
	for (i = 0; i < n; i++) {
		scanf("%d", &x);
		insert(l2, x, i);
    }
	l3 = merge(l1, l2);
	print(l3);
    l1 = destroy(l1);
	l2 = destroy(l2);
	l3 = destroy(l3);
    return 0;
}
