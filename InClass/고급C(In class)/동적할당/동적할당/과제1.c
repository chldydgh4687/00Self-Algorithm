#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void compareString(char *a, char *b);

int main()
{
	char temp[51] = { 0 };

	gets(temp);
	//���ڿ� �����Ҵ� + 1
	char *a = (char*)malloc(strlen(temp) + 1);
	strcpy(a, temp);

	gets(temp);
	//���ڿ� �����Ҵ� + 1
	char *b = (char*)malloc(strlen(temp) + 1);
	strcpy(b, temp);

	compareString(a, b);

	//a,b �����Ҵ� ����
	free(a);
	free(b);
}

void compareString(char *a, char *b) {

	if (strcmp(a, b) == 0) {
		printf("identical");
	}
	else {
		printf("different");
	}
}
