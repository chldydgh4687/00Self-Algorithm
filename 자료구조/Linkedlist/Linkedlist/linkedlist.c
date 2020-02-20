#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

//링크드리스트 생성
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

//해당 원소를 가져온다.
ListNode* getLLElement(LinkedList *p, int i) {
	return p->headerNode.pLink + i;
}

//pos 에 끼워넣기
void addLLElement(LinkedList *lp, int pos, ListNode *dp) {
	if (lp->currentElementCount == 0 && pos >= 1) {
		printf("currentElementCount = 0\n");
		return 0;
	}
	else if (lp->currentElementCount + 1 < pos) {
		printf("error\n");
		return 0;
	}
	else {//채우기
		if (pos == 0 && ) {

		}
		if (pos == 0) {

		}
	}

}
//해당 원소값이 있는 원소 삭제
void removeLLElement(LinkedList *lp, int d);
//리스트 삭제
void deleteLinkedList(LinkedList *lp);

