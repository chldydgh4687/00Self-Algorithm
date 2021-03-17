//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int check_row(int **p, int M, int N);
//int check_col(int **p, int M, int N);
//
//int main() {
//	int m, n;
//	int a, b;
//	scanf("%d%d", &m, &n);
//
//	int **ar = (int**)malloc(m * sizeof(int*));
//	int i, j;
//
//	for (i = 0; i < m; i++) {
//		ar[i] = (int *)malloc(n * sizeof(int));
//	}
//
//	for (i = 0; i < m; i++) {
//		for (j = 0; j < n; j++) {
//			ar[i][j] = 0;
//		}
//	}
//
//	int x, y, z;
//
//	while (1) {
//
//		scanf("%d%d%d", &x, &y, &z);
//		if (x == 0 && y == 0 && z == 0) {
//			break;
//		}
//		else {
//			if (ar[x][y] != 0) {
//				continue;
//			}
//			else
//			{
//				ar[x][y] = z;
//			}
//		}
//	}
//
//	for (i = 0; i < m; i++) {
//		for (j = 0; j < n; j++) {
//			printf(" %d", ar[i][j]);
//		}
//		printf("\n");
//	}
//
//	a = check_row(ar, m, n);
//	b = check_col(ar, m, n);
//
//	if (a > b) {
//		printf("%d", a);
//	}
//	else {
//		printf("%d", b);
//	}
//
//	for (i = 0; i < m; i++) {
//		free(ar[i]);
//	}
//
//	free(ar);
//}
//
//int check_row(int **p, int M, int N) {
//	int i, j;
//	int cnt = 0, max = -1;
//	for (i = 0; i < M; i++) {
//		for (j = 0; j < N; j++) {
//			if (p[i][j] == 0) {
//				cnt++;
//			}
//			else {
//				if (max < cnt) {
//					max = cnt;
//				}
//				cnt = 0;
//			}
//		}
//		if (max < cnt) {
//			max = cnt;
//		}
//		cnt = 0;
//	}
//
//	return max;
//}
//int check_col(int **p, int M, int N) {
//	int i, j;
//	int cnt = 0, max = -1;
//	for (i = 0; i < N; i++) {
//		for (j = 0; j < M; j++) {
//			if (p[j][i] == 0) {
//				cnt++;
//			}
//			else {
//				if (max < cnt) {
//					max = cnt;
//				}
//				cnt = 0;
//			}
//		}
//		if (max < cnt) {
//			max = cnt;
//		}
//		cnt = 0;
//	}
//
//	return max;
//}