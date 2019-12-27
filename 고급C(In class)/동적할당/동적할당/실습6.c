//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//struct st {
//	char n[8];
//	int k;
//	int e;
//	int m;
//	double avg;
//};
//typedef struct st s;
//
//int main()
//{
//	int N;
//	scanf("%d", &N);
//
//	s *p = (s*)malloc(N * sizeof(s));
//	int i;
//	for (i = 0; i < N; i++) {
//		scanf("%s%d%d%d", p[i].n, &p[i].k, &p[i].e, &p[i].m);
//		p[i].avg = ((double)p[i].k + (double)p[i].e + (double)p[i].m)/3;
//	}
//
//	for (i = 0; i < N; i++) {
//		printf("%s %.1lf", p[i].n, p[i].avg);
//		if (p[i].k >= 90 || p[i].e >= 90 || p[i].m >= 90) {
//			printf(" GREAT");
//		}
//		if (p[i].k < 70 || p[i].e < 70 || p[i].m < 70) {
//			printf(" BAD");
//		}
//		printf("\n");
//	}
//
//	free(p);
//}

/*
2
kim 100 82 34
young 90 100 99

kim 72.0 GREAT BAD
Young 96.3 GREAT
*/