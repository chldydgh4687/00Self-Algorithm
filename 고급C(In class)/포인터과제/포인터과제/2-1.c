////���� �ּ�ó��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int ar[6];
//	int *p;
//
//	for (p = ar; p < ar + 6; p++) {
//		scanf("%d", p);
//	}
//
//	/*
//	p, q : ar �迭�� ��� ������ ����
//	cnt : �ߺ� Ƚ��
//	anything : �ߺ��� ���� ������ �˸��� 1, 0 �� key �� ����
//	*/
//
//	int *q, cnt = 0,anything = 0;
//	for (p = ar; p < ar + 6; p++) {
//		for (q = ar; q < ar + 6; q++) {
//
//			/*������ �ּҰ����� �Ȱ��� ����Ű�� ���� ã���� break*/
//			if (q < p) {
//				if (*p == *q) {
//					break;
//				}
//			}
//			/*q�� p �� ���� �������� �����Ͽ� ���� ���� ã�� cnt++ */
//			if (*p == *q) {
//				++cnt;
//			}
//		}
//		/* cnt �� 1�̻��Ͻ� ����ϸ� �ߺ��� ���� ������ �˸��� Ű���� 1�� ��*/
//		if (cnt > 1) {
//			printf("%d %d\n", *p, cnt);
//			anything = 1;
//		}
//		// count �ʱ�ȭ
//		cnt = 0;
//	}
//
//	// �ߺ����� ������ 0 �̹Ƿ� 0�� ���
//	if (anything == 0) {
//		printf("0");
//	}
//}