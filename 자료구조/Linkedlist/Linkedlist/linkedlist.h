#ifndef _LINKEDLIST_
#define _LINKEDLIST_

typedef struct ListNodeList {

	int currentElementCount;
	ListNode headerNode;

}LinkedList;

typedef struct ListNodeType
{
	int data;
	struct ListNodeType* pLink;

}ListNode;

//해당 원소를 가져온다.
ListNode* getLLElement(LinkedList *p, int i);
//링크드리스트 생성
LinkedList* createLinkedList();
//pos 에 끼워넣기
int addLLElement(LinkedList *lp, int pos, ListNode *dp);
//해당 원소값이 있는 원소 삭제
int removeLLElement(LinkedList *lp, int d);
//리스트 삭제
void deleteLinkedList(LinkedList *lp);


#endif _LINKEDLIST_