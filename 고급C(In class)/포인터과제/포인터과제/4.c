//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	int a[10], b[10];
//	int n = 0, m = 0;
//	int insert;
//
//	while (1) {
//		scanf("%d", &insert);
//		if (insert == 0) {
//			break;
//		}
//		a[n++] = insert;
//	}
//
//	while (1) {
//		scanf("%d", &insert);
//		if (insert == 0) {
//			break;
//		}
//		b[m++] = insert;
//	}
//
//
//	int *i, *j;
//
//	int swap;
//	//b정렬 내림차순
//	for (i = b; i < b + m; i++) {
//		for (j = i + 1; j < b + m; j++) {
//			if (*i < *j) {
//				swap = *i;
//				*i = *j;
//				*j = swap;
//			}
//		}
//	}
//
//	
//
//	//a 와 b 비교해서 a와 스왑
//	for (i = a; i < a + n; i++) {
//		for (j = b; j < b + m; j++) {
//			if (*i < *j) {
//				swap = *i;
//				*i = *j;
//				*j = swap;
//			}
//		}
//	}
//
//	//a 내림차순
//	for (i = a; i < a + n; i++) {
//		for (j = i + 1; j < a + n; j++) {
//			if (*i < *j) {
//				swap = *i;
//				*i = *j;
//				*j = swap;
//			}
//		}
//	}
//
//	//b 오름차순
//	for (i = b; i < b + m; i++) {
//		for (j = i + 1; j < b + m; j++) {
//			if (*i > *j) {
//				swap = *i;
//				*i = *j;
//				*j = swap;
//			}
//		}
//	}
//
//
//	for (i = a; i < a + n; i++) {
//		printf("%d ", *i);
//	}
//	printf("\n");
//	for (i = b; i < b + m; i++) {
//		printf("%d ", *i);
//	}
//}