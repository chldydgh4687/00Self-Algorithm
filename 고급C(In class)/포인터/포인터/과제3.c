////2ȸ�� �ڵ����̱�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void input(char *p, int N);
//void upper(char *p, int N);
//void lower(char *p, int N);
//int DOUBLE(char *p, int N);
//
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	//scanf �� enter���� getchar�� ������.
//	getchar();
//
//	char ar[20];
//	input(ar, N);
//	upper(ar, N);
//	lower(ar, N);
//	printf("%d",DOUBLE(ar, N));
//}
//
//void input(char *p, int N) {
//	char *q;
//	for (q = p; q < p + N; ++q) {
//		scanf("%c", q);
//	}
//}
//void upper(char *p, int N) {
//	char *q;
//	int i = 0;
//	for (q = p; q < p + N; ++q) {
//		if (*q >= 'A' && *q <= 'Z') {
//			printf("%c", *q);
//			i = 1;
//		}
//	}
//	//�빮�ڰ� ������ \n �����.
//	if (i == 1) {
//		printf("\n");
//	}
//}
//void lower(char *p, int N) {
//	char *q;
//	int i = 0;
//	for (q = p; q < p + N; ++q) {
//		if (*q >= 'a' && *q <= 'z') {
//			printf("%c", *q);
//			i = 1;
//		}
//	}//�ҹ��ڰ� ������ \n �����.
//	if (i == 1) {
//		printf("\n");
//	}
//}
//int DOUBLE(char *p, int N) {
//	char *q;
//	int num = 0;
//	for (q = p; q < p + N; ++q) {
//		if (*q >= '0' && *q <= '9') {
//			//num : ���� �ʱ�ȭ
//			// 10 �ڸ��� �̵�
//			// *q - '0' �����ڸ�
//			num = num * 10 + (*q - '0');
//		}
//	}
//	return num * 2;
//}
