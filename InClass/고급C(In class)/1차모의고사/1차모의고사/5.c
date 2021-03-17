#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct st {
	char classes[51];
	int st_num;
};

typedef struct st s;

int main()
{
	s ar[100] = { 0, };
	s swap;

	int N;
	scanf("%d", &N);

	int i;
	for (i = 0; i < N; i++) {
		getchar();
		gets(ar[i].classes);
		scanf("%d", &ar[i].st_num);
	}

	int j;
	for (i = 0; i < N; i++) {
		for (j = i + 1; j < N; j++) {
			if (strcmp(ar[i].classes, ar[j].classes) > 0) {
				swap = ar[i];
				ar[i] = ar[j];
				ar[j] = swap;
			}
		}
	}

	for (i = 0; i < N; i++) {
		for (j = i + 1; j < N; j++) {
			if (strcmp(ar[i].classes, ar[j].classes) == 0) {
				if (ar[i].st_num > ar[j].st_num) {
					swap = ar[i];
					ar[i] = ar[j];
					ar[j] = swap;
				}
			}
		}
	}

	for (i = 0; i < N; i++) {
		printf("%s %d\n", ar[i].classes, ar[i].st_num);
	}
}

/*
5
computer
1712745
biology
1720824
computer
1760432
biology
1712345
computer
1713812

*/

