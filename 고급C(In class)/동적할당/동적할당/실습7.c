//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int N;
//	scanf("%d", &N);
//
//	int *p = (int*)malloc(N * sizeof(int));
//
//	int i;
//	for (i = 0; i < N; i++) {
//		scanf("%d", &p[i]);
//	}
//
//	int swap;
//	for (i = 0; i < N-1; i++) {
//		if (p[i] > p[i + 1]) {
//			swap = p[i];
//			p[i] = p[i + 1];
//			p[i + 1] = swap;
//		}
//	}
//	
//	for (i = 0; i < N; i++) {
//		printf("%d\n", p[i]);
//	}
//
//	free(p);
//}
//
//
///*
//5
//5 4 3 2 1
//
//4
//3
//2
//1
//5
//*/