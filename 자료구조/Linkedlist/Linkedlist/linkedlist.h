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

//�ش� ���Ҹ� �����´�.
ListNode* getLLElement(LinkedList *p, int i);
//��ũ�帮��Ʈ ����
LinkedList* createLinkedList();
//pos �� �����ֱ�
int addLLElement(LinkedList *lp, int pos, ListNode *dp);
//�ش� ���Ұ��� �ִ� ���� ����
int removeLLElement(LinkedList *lp, int d);
//����Ʈ ����
void deleteLinkedList(LinkedList *lp);


#endif _LINKEDLIST_