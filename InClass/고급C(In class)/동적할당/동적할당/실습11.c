//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int N;
//
//	int *p = (int*)malloc(5 * sizeof(int));
//	int *q = NULL;
//	int i = 0, j = 0;
//	int k;
//	while (1) {
//		scanf("%d", &p[i]);
//		if (i == 4 + (j * 3)) {
//			j++;
//			q = (int*)malloc((5 + (j * 3)) * sizeof(int));
//			for (k = 0; k <= i; k++) {
//				q[k] = p[k];
//			}
//			p = q;
//		}
//		if (p[i] == -1) {
//			break;
//		}
//		i++;
//	}
//
//	for (j = 0; j <= i; j++) {
//		printf(" %d", p[j]);
//	}
//
//	free(p);
//}