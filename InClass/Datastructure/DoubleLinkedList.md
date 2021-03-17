# 이중연결리스트

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//#define _CRTDBG_MAP_ALLOC
//#include <crtdbg.h>

typedef struct ListNode {
	char elem;
	struct ListNode *prev;
	struct ListNOde *next;
}LN;

typedef struct DoubleList {
	int n;
	struct ListNode H;
	struct ListNode T;
}DL;

DL* initialize() {
	DL *new_list = (DL*)malloc(sizeof(DL));
	if (new_list != NULL) {
		new_list->H.next = &(new_list->T);
		new_list->T.prev = &(new_list->H);
		new_list->n = 0;
		return new_list;
	}
	else {
		return NULL;
	}
}

void print(DL *list) {
	DL *plist = list;
	LN *p = plist->H.next;
	while (p != &(plist->T)) {
		printf("%c", p->elem);
		p = p->next;
	}
	return;
}

void add(DL *list, int r, char e) {
	if (((r < 1) || (r >(list->n) + 1))) {
		printf("invalid position\n");
		return;
	}
	LN *q = (LN*)malloc(sizeof(LN));
	if (q != NULL) {
		q->next = NULL;
		q->prev = NULL;
		q->elem = e;
		LN *p = &(list->H); int i;
		for (i = 1; i <= r; i++)
			p = p->next;

		q->prev = p->prev;
		q->next = p;
		(p->prev)->next = q;
		p->prev = q;
		list->n++;
	}
	else {
		return;
	}
	return;
}


void delete(DL *list, int r) {
	if ((r<1) || (r>list->n)) {
		printf("invalid position\n");
		return;
	}
	LN *p = &(list->H); int i;
	LN *pL = NULL, *pR = NULL;
	for (i = 1; i <= r; i++)
		p = p->next;
	pL = p->prev; pR = p->next;
	pL->next = p->next;
	pR->prev = p->prev;
	list->n--;
	free(p);
	return;
}

void clearelement(DL *list) {
	if (list != NULL) {
		while (list->n > 0) {
			delete(list, 1);
		}
	}
	return;
}

char get(DL *list, int r) {
	if ((r<1) || (r>list->n)) {
		printf("invalid position\n");
		return NULL;
	}
	LN *p = &(list->H); int i;
	for (i = 1; i <= r; i++)
		p = p->next;
	return p->elem;
}

int main() {
	int c_num, i, r;
	char command, e;
	DL *list = initialize();
	scanf("%d", &c_num);
	for (i = 0; i < c_num; i++) {
		getchar();
		scanf("%c", &command);
		if (command == 'A') {
			scanf(" %d %c", &r, &e);
			add(list, r, e);
		}
		else if (command == 'D') {
			scanf("%d", &r);
			delete(list, r);
		}
		else if (command == 'G') {
			scanf(" %d", &r);
			if (get(list, r) != NULL) {
				printf("%c\n", get(list, r));
			}
		}
		else if (command == 'P') {
			print(list);
			printf("\n");
		}
	}
	clearelement(list);
	free(list);
	
	/*_CrtDumpMemoryLeaks();*/

	return 0;
}
```
