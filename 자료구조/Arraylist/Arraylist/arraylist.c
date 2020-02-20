#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arraylist.h"
//
ArrayList* createArrayList(int maxElementCount) {

	ArrayList *pReturn = NULL;

	if (maxElementCount > 0) {
		pReturn = (ArrayList*)malloc(sizeof(ArrayList));

		//동적할당 오류 체크
		if (pReturn != NULL) {
			pReturn->maxElementCount = maxElementCount;
			pReturn->currentElementCount = 0;
			pReturn->pElement = NULL;
		}
		else {
			printf("malloc_Error : distribution failed.\n");
			return NULL;
		}
	}
	else {
		printf("maxElementCount_Error : more than 0 data\n");
		return NULL;
	}

	pReturn->pElement = (ArrayListNode*)malloc(maxElementCount * sizeof(ArrayListNode));

	if (pReturn->pElement == NULL) {
		printf("Element_malloc_Error : distribution failed.\n");
		free(pReturn);
		return NULL;
	}

	memset(pReturn->pElement, 0, sizeof(ArrayListNode)*maxElementCount);

	return pReturn;
}

//
int addALElement(ArrayList* pList, int position, ArrayListNode element) {
	
	ArrayList* p = pList;
	int i;

	if (isArrayListFull == TRUE) {
		printf("This list is full");
		return 0;
	}
	else {
		for (i = p->currentElementCount; i >= position; i--) {
			p->pElement[i + 1] = p->pElement[i];
		}
		p->pElement[position] = element;
		p->currentElementCount++;
	}
}

//
int isArrayListFull(ArrayList* pList) {
	
	ArrayList* p = pList;

	if (p->currentElementCount == p->maxElementCount) {
		return 1;
	}
	else {
		return 0;
	}

}

//
void displayArrayList(ArrayList* pList) {

	ArrayListNode* p = NULL;
	for (p = pList->pElement; p < pList->pElement + pList->currentElementCount; p++)
		printf(" %d",p->data);

	printf("\n");
}

//
int removeALElement(ArrayList* pList, int position) {
	ArrayList* p = pList;
	int i;

	for (i = position; i < p->currentElementCount; i++) {
		p->pElement[i]=p->pElement[i+1];
	}
	p->currentElementCount--;
}

//
int getArrayListLength(ArrayList* pList) {
	ArrayList* p = pList;
	return p->currentElementCount;
}

//
ArrayListNode* getALElement(ArrayList* pList, int position) {
	ArrayList* p = pList;
	ArrayListNode *node = p->pElement+position;
	return node;
}

//
void deleteArrayList(ArrayList* pList) {

	if (pList != NULL) {
		free(pList->pElement);
		free(pList);
	}
}