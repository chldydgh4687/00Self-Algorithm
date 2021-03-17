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
//	int *i;
//	for (i = p; i < p + N; i++) {
//		scanf("%d", i);
//	}
//
//	int D;
//	scanf("%d", &D);
//	p = (int*)realloc(p, (N - D)*sizeof(int));
//	/*realloc(p, sizeof ÀØÁö¸»±â)*/
//	for (i = p; i < p + N - D; i++) {
//		printf("%d\n", *p);
//	}
//
//	free(p);
//}
//
///*
//3
//16011
//16012
//16013
//2
//
//16011
//*/