#ifndef _ARRAYLIST_
#define _ARRAYLIST_

typedef struct ArrayListNodeType
{
	int data;
}ArrayListNode;

typedef struct ArrayListType
{
	int maxElementCount;
	int currentElementCount;
	ArrayListNode *pElement;
}ArrayList;

ArrayList* createArrayList(int maxElementCount);
int addALElement(ArrayList* pList, int position, ArrayListNode element);
int isArrayListFull(ArrayList* pList);
int removeALElement(ArrayList* pList, int position);
int getArrayListLength(ArrayList* pList);
ArrayListNode* getALElement(ArrayList* pList, int position);
void displayArrayList(ArrayList* pList);

void deleteArrayList(ArrayList* pList);
void clearArrayList(ArrayList* pList);


#endif


#ifndef _COMMON_LIST_DEF_
#define _COMMON_LIST_DEF_

#define TRUE 1
#define FALSE 0

#endif