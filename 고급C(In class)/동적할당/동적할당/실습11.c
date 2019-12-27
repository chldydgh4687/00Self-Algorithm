//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	int *p = (int*)malloc(5 * sizeof(int));
//	int cnt = 0;
//	int *q, *ar =p;
//	int i = 0, j = 0;
//	while (1) {
//		scanf("%d", &p[i]);
//		if (p[i] == -1) {
//			i++;
//			break;
//		}
//		i++;
//		if (i == 5 + 3 * cnt) {
//			q = (int*)malloc(((3*cnt))* sizeof(int));
//			for (j = 0; j < 3 * cnt; j++) {
//				*(ar + 5 + 3 * cnt + j) = *(q + j);
//			}
//			++cnt;
//		}
//	}
//
//	int size = i;
//
//	for (i = 0; i < size; i++) {
//		printf(" %d", p[i]);
//	}
//
//	free(p);
//}