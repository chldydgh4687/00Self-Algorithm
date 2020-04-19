# LinkedList 

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define _CRT_DBG_MAP_ALLOC
#include <crtdbg.h>

typedef struct ListNode {
	char data;
	struct ListNode *pLink;
}LN;

typedef struct Linkedlist {
	int n;
	struct ListNode h;
	struct ListNode t;
}LL;


//링크드리스트 기능
LL *create_List();
//추가
void add(LL *list, int r, char e);
//삭제
void delete(LL *list, int r);
//탐색
char get(LL *list, int r);
//순회
void print(LL *list);
//반환
void deleteelement(LL *list);


void main() {
	int c_num; scanf("%d", &c_num);
	char command, data;
	int i, rank;
	LL *list = create_List();
	for (i = 0; i < c_num; i++) {
		getchar();
		scanf("%c", &command);
		if (command == 'A') {
			scanf("%d %c", &rank, &data);
			add(list, rank, data);
		}
		else if (command == 'G') {
			scanf("%d", &rank);
			printf("%c\n", get(list, rank));
		}
		else if (command == 'R') {
			scanf("%d", &rank);
			delete(list, rank);
		}
		else if (command == 'P') {
			print(list);
		}
	}
	deleteelement(list);
	free(list);

	_CrtDumpMemoryLeaks();
	return 0;
}



LL *create_List() {
	LL *new_list = (LL*)malloc(sizeof(LL));
	if (new_list != NULL) {
		new_list->h.pLink = &(new_list->t);
		new_list->n = 0;
		return new_list;
	}
	else {
		printf("Allocation_ERROR");
		return 0;
	}
}
void add(LL *list, int r, char e) {
	LL *p = list;
	if ((r < 1) || (r >(p->n) + 1)) {
		printf("invalid position\n");
		return;
	}
	LN *new_node = (LN*)malloc(sizeof(LN));
	if (new_node != NULL) {
		new_node->data = e;
		LN *q = &(p->h);
		LN *next = NULL;
		for (int i = 1; i < r; i++)
			q = q->pLink;
		next = q->pLink;
		q->pLink = new_node;
		new_node->pLink = next;

		p->n++;
		return;
	}
	else {
		printf("allocation_ERROR");
		return;
	}
}
void delete(LL *list, int r) {
	LL *p = list;
	if ((r < 1) || (r >(p->n))) {
		printf("invalid position\n");
		return;
	}
	LN *prev = &(p->h);
	LN *target = NULL;
	for (int i = 1; i < r; i++)
		prev = prev->pLink;
	target = prev->pLink;
	prev->pLink = target->pLink;
	free(target);

	p->n--;
	return;
}
char get(LL *list, int r) {
	LL *p = list;
	if ((r < 1) || (r >(p->n))) {
		printf("invalid position\n");
		return 0;
	}
	LN *get_node = &(p->h);
	for (int i = 1; i <= r; i++) {
		get_node = get_node->pLink;
	}
	return get_node->data;
}
void print(LL *list) {
	LL *p = list;
	LN *node = p->h.pLink;
	while (node != &(p->t)) {
		printf("%c", node->data);
		node = node->pLink;
	}
	printf("\n");
	return;
}
void deleteelement(LL *list) {
	LL *p = list;
	for (int i = 0; i < p->n; i++) {
		delete(list, 1);
	}
	return;
}
```
