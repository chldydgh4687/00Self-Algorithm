////���� �ּ�ó��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int *maxmin(int *ar);
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
//		printf("%d\n", *(maxmin(ar)));
//
//		// p �� �ٽ� ar�� �ʱ�ȭ ���Ѽ� ar�� ó���� ������ �ٽù����� �غ�.
//		p = ar;
//	}
//}
//
//
//int *maxmin(int *ar) {
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
//
//	int sub = 0;
//	int near = 1000;
//	int *pos = NULL;
//
//	for (j = ar; j < ar + cnt; j++) {
//		// sub : �� ar ���� max - min �� ���̰�
//		sub = (*j) - (max - min);
//		// - �Ͻ� ���밪����
//		if (sub < 0) {
//			sub = -sub;
//		}
//
//		// near ���� ������ ��ġ�ּҿ� �ּ� ����� ������ ����.
//		if (near > sub) {
//			near = sub;
//			pos = j;
//		}
//	}
//	
//	// int�� ������ �ּҸ� ��ȯ.
//	return pos;
//}