////2ȸ�� �ڵ����̱�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	int ar[6];
//	int *p;
//	//�Է�
//	for (p = ar; p < ar + 6; p++) {
//		scanf("%d", p);
//	}
//
//	int cnt = 0, s_cnt = 0;
//	int *q, con_key = 0;
//	// 6���� �ߺ��� Ȯ��
//	for (p = ar; p < ar + 6; p++) {
//		// p �ش��ϴ� �迭 ���Ұ� ������ �ߺ����� �ִ� ���� �����Ͽ� continue ��; 
//		for (q = p - 1; q >= ar; q--) {
//			if (*p == *q) {
//				con_key = 1;
//				break;
//			}
//		}
//		//continue ����
//		if (con_key == 1) {
//			con_key = 0;
//			continue;
//		}
//
//		// �ߺ����� ���� ���ο� ���� ������ �ߺ� ������ �߷����� �ݺ��� ����
//		for (q = p + 1; q < ar + 6; q++) {
//			if (*p == *q) {
//				++cnt;
//				//�ߺ��� ������ �˸��� ��
//				s_cnt = 1;
//			}
//		}
//		//�ߺ��� ������ 2�� �̻��Ͻ� ���
//		if (cnt > 0) {
//			printf("%d %d\n", *p, cnt+1);
//		}
//
//		//cnt �� ����ȭ
//		cnt = 0;
//	}
//	//6�� �����߿� �ߺ��� �ִٸ� 0 ���
//	if (s_cnt == 0) {
//		printf("0");
//	}
//}