////���� �ּ�ó��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int correct(int *ar);
//int newnum(int *arr);
//
//int main()
//{
//	int ar[6];
//	int *p;
//
//	for (p = ar; p < ar + 6; p++) {
//		scanf("%d", p);
//	}
//	// 0,1 �ߺ� ���
//	printf("%d\n",correct(ar));
//	// ��� ���
//	for (p = ar; p < ar + 6; p++) {
//		printf("%d ", *p);
//	}
//}
//
//int correct(int *ar) {
//	int *p, *i;
//	int *q, cnt = 0;
//	for (p = ar; p < ar + 6; p++) {
//		for (q = ar; q < ar + 6; q++) {
//
//			// �ּҰ��� ���� ��, �ּҰ��� ���� ��
//			if (q < p) {
//				if (*p == *q) {
//					break;
//				}
//				else {
//					continue;
//				}
//			}
//			else if (q == p) {
//				continue;
//			}
//
//			// �˻� ����� �� ��󿡼� ���� ��
//			if (*p == *q) {
//				// �ش� �˻� ����� newnum�� ���� ���� ���� ���� ��ȯ
//				*p = newnum(ar);
//				// �ߺ����� ���� Ű���� ��
//				cnt = 1;
//			}
//		}
//	}
//
//	//Ű���� ���� ����
//	if (cnt == 0) {
//		return 0;
//	}
//	else {
//		return 1;
//	}
//	
//}
//
//int newnum(int *arr) {
//
//	int *p, k = 1;
//	int i;
//	//�ش� �Լ����� k�� ��� 1�� �ʱ�ȭ�� �Ǳ� ������
//	//k�� ������ 6���� ������ arr ��󿡼� �������� ������ ������ ������Ŵ.
//
//	for (i = 0; i < 6; i++) {
//		for (p = arr; p < arr + 6; p++) {
//			if (*p == k) {
//				k = *p;
//				++k;
//			}
//		}
//	}
//
//	return k;
//}