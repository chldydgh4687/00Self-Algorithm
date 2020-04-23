# 더블링크드리스트(정렬 추가)
```
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define _CRT_DBG_MAP_ALLOC
#include <crtdbg.h>

typedef struct ListNode {
	int data;
	struct ListNode *prev;
	struct ListNode *next;
}LN;

typedef struct DoubleList {
	int n;
	struct ListNode head;
	struct ListNode tail;
}DL;

DL *create_list();
void add_(DL *list, int r, int e);
void remove_(DL *list, int r);
int get_(DL *list, int r);
void print_(DL *list);
void delete_element(DL *list);
void sort(DL *lsit);

int main() {
	DL *list = create_list();
	int com_n; scanf("%d", &com_n);
	int r, e; char com;
	for (int i = 0; i < com_n; i++) {
		getchar();
		scanf("%c", &com);
		if (com == 'a') {
			scanf("%d %d", &r, &e);
			add_(list, r, e);
		}
		else if (com == 'r') {
			scanf("%d", &r);
			remove_(list,r);
		}
		else if (com == 'g') {
			scanf("%d", &r);
			printf("%d\n",get_(list,r));
		}
		else if (com == 'p') {
			print_(list);
		}
		else if (com == 's') {
			sort(list);
		}
	}
	delete_element(list);
	free(list);
	//_CrtDumpMemoryLeaks;
	return 0;
}

DL *create_list() {
	DL *new_list = (DL*)malloc(sizeof(DL));
	if (new_list != NULL) {
		new_list->n = 0;
		new_list->head.next = &(new_list->tail);
		new_list->tail.prev = &(new_list->head);
		return new_list;
	}else {
		printf("Allocation Error\n");
		return NULL;
	}
}
void add_(DL *list, int r, int e) {
	if ((r < 1) || (r > list->n + 1)) {
		printf("invalid position\n");
		return;
	}
	LN *new_node = (LN*)malloc(sizeof(LN));
	if (new_node != NULL) {
		new_node->data = e;
		LN *p = &(list->head);
		for (int i = 1; i < r; i++)
			p = p->next;
		(p->next)->prev = new_node;
		new_node->next = (p->next);
		p->next = new_node;
		new_node->prev = p;

		list->n++;
		return;
	}
	else {
		printf("Allocation Error\n");
		return;
	}
}
void remove_(DL *list, int r) {
	if ((r < 1) || (r > list->n)) {
		printf("invalid position\n");
		return;
	}
	LN *p = &(list->head);
	for (int i = 1; i <= r; i++)
		p = p->next;
	(p->next)->prev = p->prev;
	(p->prev)->next = p->next;
	free(p);

	list->n--;
	return;
}
int get_(DL *list, int r) {
	if ((r < 1) || (r > list->n)) {
		printf("invalid position\n");
		return 0;
	}
	LN *p = &(list->head);
	for (int i = 1; i <= r; i++)
		p = p->next;
	return p->data;
}
void print_(DL *list) {
	LN *p = list->head.next;
	while (p != &(list->tail)) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
	return;
}
void delete_element(DL *list) {
	LN *p = &(list->head);
	for (int i = 0; i < list->n; i++) {
		remove_(list, 1);
	}
	return;
}
void sort(DL *list) {
	LN *p = &(list->head);
	LN *t = NULL;
	int swap;
	for (int i = 0; i < list->n; i++) {
		p = p->next;
		t = p->next;
		for (int j = i + 1; j < list->n; j++) {
			if (p->data < t->data){
				swap = p->data;
				p->data = t->data;
				t->data = swap;
			}
			t = t->next;
		}
	}
	return;
}
```
