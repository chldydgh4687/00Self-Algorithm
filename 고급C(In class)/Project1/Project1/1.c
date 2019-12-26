#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void intput_matrix(int *(ar)[]);
void add_matrix(int *(ar)[],int *(aar)[],int *(res)[]);
void output_matrix(int *(ar)[]);

int main()
{
	int aar[3][3], bar[3][3];
	int res[3][3];

	intput_matrix((aar));
	printf("\n");
	intput_matrix((bar));
	add_matrix(aar,bar,res);
	output_matrix(res);
}

void intput_matrix(int (*ar)[3]) {
	
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", (*(ar + i) + j));
		}
	}
}
void add_matrix(int (*ar)[3], int (*aar)[3], int (*res)[3]) {

	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			*(*(res + i) + j) = *(*(aar + i) + j) + *(*(ar + i) + j);
		}
	}
}
void output_matrix(int (*ar)[3]) {
	
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", *(*(ar + i) + j));
		}
		printf("\n");
	}
}


/*
1 2 3
4 5 6
7 8 9
*/