//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct st {
//	char *n;
//	char **book;
//	int *score;
//	int cnt, pcnt;
//}STUDENT;
//
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	STUDENT *ar = (STUDENT*)malloc(N * sizeof(STUDENT));
//	
//	char n_tmp[21] = { 0 };
//	char **b_tmp;
//	int *s_tmp;
//	int i, j, k = 0;
//	int m, n;
//	int sum = 0;
//	getchar();
//	for (i = 0; i < N; i++) {
//		gets(n_tmp);
//		puts(n_tmp);
//		ar[i].n = (char*)malloc(strlen(n_tmp) + 1);
//		strcpy(ar[i].n, n_tmp);
//
//		ar[i].book = (char**)malloc(1 * sizeof(char*));
//		ar[i].score = (char*)malloc(1 * sizeof(int));
//		ar[i].cnt = 0;
//		ar[i].pcnt = 0;
//		for (j = 0; j < 6; j++) {
//			scanf("%s", n_tmp);
//			if (n_tmp[0] == '0')
//				break;
//			scanf("%d", &ar[i].score[j]);
//			++ar[i].cnt;
//			if (ar[i].score[j] >= 50) {
//				++ar[i].pcnt;
//			}
//
//			ar[i].book[j] = (char*)malloc(strlen(n_tmp) + 1);
//			b_tmp = (char**)malloc((j + 2) * sizeof(char*));
//			b_tmp[j] = (char*)malloc(strlen(n_tmp) + 1);
//			strcpy(ar[i].book[j], n_tmp);
//			strcpy(b_tmp[j], n_tmp);
//
//			s_tmp = (int*)malloc((j+2)*sizeof(int));
//			s_tmp[j] = ar[i].score[j];
//
//			ar[i].score = s_tmp;
//			ar[i].book = b_tmp;
//		}
//		sum = (int)((double)ar[i].pcnt / 5 * 100);
//		printf("%s %d%%\n",ar[i].n,sum);
//
//		getchar();
//		k = 0;
//	}
//}

/*
1
ann
h 60
p 40
c 100
l 10
d 10
*/