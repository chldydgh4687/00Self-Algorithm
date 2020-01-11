////2회차 코드줄이기
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int a[10], b[10];
//	int n, m, input;
//
//	int *p = NULL;
//	p = a;
//	int cnt = 0;
//	//a, b, 에 입력을 받는데 0 이 되면 break
//	while (1) {
//		scanf("%d", &input);
//		if (input == 0) break;
//		*(p++) = input;
//		++cnt;
//	}
//	n = cnt;
//
//	p = b;
//	cnt = 0;
//	while (1) {
//		scanf("%d", &input);
//		if (input == 0) break;
//		*(p++) = input;
//		++cnt;
//	}
//	m = cnt;
//
//	//a target으로 b에서 더 큰값이 있는지 확인되면 해당 값을 스왑한다.
//	int *q, swap;
//	for (p = a; p < a + n; p++) {
//		for (q = b; q < b + m; q++) {
//			if (*p < *q) {
//				swap = *p;
//				*p = *q;
//				*q = swap;
//			}
//		}
//	}
//	//a에는 큰값만 b에는 작은 값만 존재
//	//a의 내림차순정렬
//	for (p = a; p < a + n; p++) {
//		for (q = p + 1; q < a + n; q++) {
//			if (*q > *p) {
//				swap = *p;
//				*p = *q;
//				*q = swap;
//			}
//		}
//	}
//	//b의 오름차순 정렬
//	for (p = b; p < b + m; p++) {
//		for (q = p + 1; q < b + m; q++) {
//			if (*q < *p) {
//				swap = *p;
//				*p = *q;
//				*q = swap;
//			}
//		}
//	}
//
//	//각각을 출력
//	for (p = a; p < a + n; p++) {
//		printf("%d ", *p);
//	}
//	printf("\n");
//	for (p = b; p < b + m; p++) {
//		printf("%d ", *p);
//	}
//	printf("\n");
//}