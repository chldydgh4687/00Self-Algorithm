# 다항식연결리스트
  
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#define _CRT_DBG_MAP_ALLOC
//#include <crtdbg.h>

typedef struct ListNode{
	int coef, exp;
	struct ListNode *next;
}LN;
typedef struct Polylist {
	int n;
	struct ListNode head;
}PL;

PL *create_list();
void appendTerm(PL *k, int c, int e);
void print(PL *list);
PL *addPoly(PL *lista, PL *listb);
void deleteelement(PL *lista);
void allocationfree(PL *lista, PL *listb, PL *results);

void main(){
	PL *lista, *listb, *results = NULL;
	lista = create_list();
	listb = create_list();
	int a,b,coef,exp;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d %d", &coef, &exp);
		appendTerm(lista, coef, exp);
	}

	scanf("%d", &b);
	for (int i = 0; i < b; i++) {
		scanf("%d %d", &coef, &exp);
		appendTerm(listb, coef, exp);
	}

	results = addPoly(lista, listb);
	print(results);
	allocationfree(lista, listb, results);
	//_CrtDumpMemoryLeaks;
	return;
}

PL *create_list() {
	PL *new_list = (PL*)malloc(sizeof(PL));
	if (new_list != NULL) {
		new_list->n = 0;
		new_list->head.next = NULL;
		return new_list;
	}
	else {
		printf("allocation error\n");
		return NULL;
	}
}

void appendTerm(PL *k, int c, int e) {
	LN *new_node = (LN*)malloc(sizeof(LN));
	if (new_node != NULL) {
		new_node->coef = c;
		new_node->exp = e;
		new_node->next = NULL;

		LN *n_node = &(k->head);
		while (n_node->next != NULL) {
			n_node = n_node->next;
		}
		n_node->next = new_node;

		k->n++;
		return;
	}
	else {
		printf("allocation Error\n");
		return;
	}
}

void print(PL *list) {
	PL *p = list;
	LN *node = &(p->head);
	while (node->next != NULL) {
		node = node->next;
		printf(" %d %d", node->coef, node->exp);
	}
	return;
}

PL* addPoly(PL *lista, PL *listb) {
	PL *sum = create_list();
	if (sum != NULL) {
		LN *anode = lista->head.next;
		LN *bnode = listb->head.next;
		while ((anode != NULL) && (bnode != NULL)) {
			if (anode->exp < bnode->exp) {
				appendTerm(sum, bnode->coef, bnode->exp);
				bnode = bnode->next;
			}
			else if (anode->exp > bnode->exp) {
				appendTerm(sum, anode->coef, anode->exp);
				anode = anode->next;
			}
			else {
				if (anode->coef + bnode->coef != 0) {
					appendTerm(sum, (anode->coef + bnode->coef), anode->exp);
				}
				anode = anode->next;
				bnode = bnode->next;
			}
		}
		while (anode != NULL) {
			appendTerm(sum, anode->coef, anode->exp);
			anode = anode->next;
		}
		while (bnode != NULL) {
			appendTerm(sum, bnode->coef, bnode->exp);
			bnode = bnode->next;
		}
		return sum;
	}
	else {
		printf("allocation Error\n");
		return NULL;
	}
}

void deleteelement(PL *list) {
	LN *node = list->head.next;
	LN *next = NULL;
	for (int i = 0; i < list->n; i++) {
		next = node->next;
		free(node);
		node = next;
	}
	return;
}

void allocationfree(PL *lista, PL *listb, PL *results) {
	deleteelement(lista);
	deleteelement(listb);
	deleteelement(results);

	free(lista);
	free(listb);
	free(results);
	return;
}
```
