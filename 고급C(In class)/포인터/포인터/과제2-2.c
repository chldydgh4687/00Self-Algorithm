////2ȸ�� �ڵ����̱�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int correct(int *ar);
//int newnum(int *ar);
//
//int main() {
//
//	int ar[6];
//	int *p;
//	//�Է�
//	for (p = ar; p < ar + 6; p++) {
//		scanf("%d", p);
//	}
//	// 6���� �ߺ��� Ȯ��
//	printf("%d\n",correct(ar));
//	//���
//	for (p = ar; p < ar + 6; p++) {
//		printf("%d ", *p);
//	}
//}
//
//int correct(int *ar){
//	
//	int *p;
//	int s_cnt = 0;
//	int *q, con_key = 0;
//	for (p = ar; p < ar + 6; p++) {
//		for (q = p+1; q < ar + 6; q++) {
//			//������ ���ڸ��� �ִ� p�� ���� �����ϱ� ������ ������ Ȯ�ξ��ص���.
//			if (*p == *q) {
//
//				*p = newnum(ar);
//				//�ߺ��� ������ �˸��� ��
//				s_cnt = 1;
//				break;
//			}
//		}
//	}
//
//	if (s_cnt == 1) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//int newnum(int *ar) {
//	int *p,k = 1;
//	int i;
//	//�ش� �Լ����� k�� ��� 1�� �ʱ�ȭ�� �Ǳ� ������
//	//k�� ������ 6���� ������ arr ��󿡼� �������� ������ ������ ������Ŵ.
//	for (i = 0; i < 6; i++) {
//		for (p = ar; p < ar + 6; p++) {
//
//			if (*p == k) {
//				k++;
//			}
//		}
//	}
//	return k;
//}