//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	int N;
//	scanf("%d", &N);
//
//	int *p = (int *)malloc(N * sizeof(int));
//
//	int i,mid;
//	for (i = 0; i < N; i++) {
//		p[i] = i;
//	}
//	mid = (N - 1) / 2;
//	
//	int M = N - 1, k = 0;
//	int *q = (int *)malloc(M * sizeof(int));
//
//	for (i = 0; i < M; i++) {
//		if (p[k]==mid) {
//			k++;
//		}
//		q[i] = p[k];
//		printf(" %d", q[i]);
//		k++;
//	}
//
//	free(p);
//	free(q);
//}
//
///*
//5
//
// 0 1 3 4
//*/