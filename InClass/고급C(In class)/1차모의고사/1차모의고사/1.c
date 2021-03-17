//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//void input(int *p, int M);
//int sel_max(int *p, int M);
//void output(int *p, int N);
//
//int main(void) {
//	int in[100], out[100], *max, i, N, M;
//
//	scanf("%d %d", &N, &M);
//	for (i = 0; i < N; i++) {
//		input(in, M);
//		max = sel_max(in, M);
//		out[i] = *max;
//	}
//
//	output(out, N);
//	return 0;
//}
//
//void input(int *p, int M) {
//	int *i;
//	for (i = p; i < p + M; i++) {
//		scanf("%d", i);
//	}
//}
//
//int sel_max(int *p, int M) {
//	int *i, *j;
//	int cnt = 0, save = 0, *save_i = NULL;
//	for (i = p; i < p + M; i++) {
//		for (j = i; j < p + M; j++) {
//			if (*i == *j) {
//				++cnt;
//			}
//		}
//		if (cnt > save) {
//			save = cnt;
//			save_i = i;
//		}
//		cnt = 0;
//
//	}
//
//	return save_i;
//}
//
//void output(int *p, int N) {
//	int *i;
//
//	for (i = p; i < p + N; i++) {
//		printf(" %d", *i);
//	}
//}
//
//
///*
//3 5
//1 2 2 1 3
//2 4 2 4 3
//1 2 3 4 5
//*/