////2ȸ�� �ڵ����̱�
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
//	//a, b, �� �Է��� �޴µ� 0 �� �Ǹ� break
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
//	//a target���� b���� �� ū���� �ִ��� Ȯ�εǸ� �ش� ���� �����Ѵ�.
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
//	//a���� ū���� b���� ���� ���� ����
//	//a�� ������������
//	for (p = a; p < a + n; p++) {
//		for (q = p + 1; q < a + n; q++) {
//			if (*q > *p) {
//				swap = *p;
//				*p = *q;
//				*q = swap;
//			}
//		}
//	}
//	//b�� �������� ����
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
//	//������ ���
//	for (p = a; p < a + n; p++) {
//		printf("%d ", *p);
//	}
//	printf("\n");
//	for (p = b; p < b + m; p++) {
//		printf("%d ", *p);
//	}
//	printf("\n");
//}