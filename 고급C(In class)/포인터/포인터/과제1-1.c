////���� �ּ�ó��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int maxmin(int *ar);
//
//int main() {
//
//	int N;
//	scanf("%d", &N);
//
//	int ar[100];
//
//	int i, *p = ar;
//
//	//N���� �ݺ�
//	for (i = 0; i < N; i++) {
//		// P �����Ϳ� ar �迭 �ּҰ��� �޾� 0 �� �Էµɽ� break;
//		while (1) {
//			scanf("%d", p);
//			if (*p == 0)
//				break;
//			p++;
//		}
//		// maxmin �� ���ϱ����� �Լ��� ����
//		printf("%d\n", maxmin(ar));
//
//		// p �� �ٽ� ar�� �ʱ�ȭ ���Ѽ� ar�� ó���� ������ �ٽù����� �غ�.
//		p = ar;
//	}
//}
//
//
//int maxmin(int *ar) {
//
//	int max = -1000;
//	int min = 1000;
//	int  *j, cnt = 0;
//
//	//�迭�� �ּҸ� �̿��Ͽ� �迭�� ũ�⸦ �˱����� 0 ������ cnt
//	for (j = ar; j < ar + 100; j++) {
//		if (*j == 0)
//			break;
//		++cnt;
//	}
//
//	//max ���� �� ũ�� max �� ���� min ���� �� ������ min�� ����
//	for (j = ar; j < ar + cnt; j++) {
//		if (max < *j) {
//			max = *j;
//		}
//		if (min > *j) {
//			min = *j;
//		}
//	}
//
//	//max-min �� ����
//	return max - min;
//}


//- ---------------------------------------------------------------------------------------


////2ȸ�� �ڵ����̱�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int maxmin(int *ar);
//
//int main() {
//
//	int ar[100];
//	int N;
//	scanf("%d", &N);
//
//	int i,j;
//	int *p = ar;
//	// N try
//	for (i = 0; i < N; i++) {
//
//		//while (ar[j] ������ �Է¹ް� 1(ture) �� ����)
//		//�ش� �迭���ҿ��� 0 �̸� �������´�.
//		while (scanf("%d", p) == 1)
//		{
//			if (*(p++) == 0) break;
//		}
//
//		//maxmin ȣ��
//		printf("%d\n", maxmin(ar));
//
//		//ù �ּ� �ʱ�ȭ
//		p = ar;
//	}
//}
//
//int maxmin(int *ar) {
//	int *p;
//	int max = -100000, min = 100000;
//	//ar�� ������ Ȯ��
//	for (p = ar;; p++) {
//		// ar ���� �� �������� �˸��� 0 �� �ش��ϸ� ���ǳ���.
//		if (*p == 0) break;
//
//		//�ִ� �ʱ�ȭ
//		if (max < *p) {
//			max = *p;
//		}
//		//�ּڰ� �ʱ�ȭ
//		if (min > *p) {
//			min = *p;
//		}
//	}
//
//	return max - min;
//}
