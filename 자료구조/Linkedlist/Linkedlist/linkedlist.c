#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

//��ũ�帮��Ʈ ����
LinkedList* createLinkedList(void) {
	LinkedList *p = (LinkedList*)malloc(sizeof(LinkedList));
	if (p != NULL) {
		memset(p, 0, sizeof(LinkedList));
	}
	else {
		printf("error\n");
		return NULL;
	}

	return p;
}

//�ش� ���Ҹ� �����´�.
ListNode* getLLElement(LinkedList *p, int i) {
	return p->headerNode.pLink + i;
}

//pos �� �����ֱ�
void addLLElement(LinkedList *lp, int pos, ListNode *dp) {
	if (lp->currentElementCount == 0 && pos >= 1) {
		printf("currentElementCount = 0\n");
		return 0;
	}
	else if (lp->currentElementCount + 1 < pos) {
		printf("error\n");
		return 0;
	}
	else {//ä���
		if (pos == 0 && ) {

		}
		if (pos == 0) {

		}
	}

}
//�ش� ���Ұ��� �ִ� ���� ����
void removeLLElement(LinkedList *lp, int d);
//����Ʈ ����
void deleteLinkedList(LinkedList *lp);

