////4-1
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[101] = { 0 };
//	char temp[4] = { 0 };
//	double num[10];
//	gets(str);
//
//	int i, j, k =0,m = 0;
//	//str ������� try
//	for (i = 0; i < strlen(str)+1; i++) {
//		//�ش���ġ�� ���ڸ� temp�� �ִ´�.
//		if (str[i] >= '0' && str[i] <= '9') {
//			temp[k++] = str[i];
//		}//�ش���ġ�� ���ڰ��ƴ� ��ȣ��
//		else {
//			//k�� ä����������
//			if (k != 0) {
//				//temp�� �������� �ΰ��� �ְ� atoi�� ���Ͽ�
//				//���ڷ� ��ȯ�Ͽ� ���ڹ迭�� ����
//				temp[k] = 0;
//				num[m++] = atoi(temp);
//			}
//			//temp�� k�� �ٽ� ó������ �ʱ�ȭ
//			k = 0;
//		}
//	}
//	//���
//	for (i = 0; i < m; i++) {
//		printf(" %.0lf", num[i]);
//	}
//}


////4-2
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[101] = { 0 };
//	char temp[101] = { 0 };
//	double num[10];
//
//	gets(str);
//
//	int i, j, k = 0, m = 0;
//	char swap;
//	int size = strlen(str);
//	//90> 100 �� ���� �ϳ��� ���� ������� 1-2*4/2 �̷������� ����� ���� ������, �Է� ���ö� �ٸ�.
//	//�Ͽ�, ���ڸ� �Űܼ� �Է� ���ø� ������
//	for (i = 0; i < strlen(str); i++) {
//		if (str[i] >= '0' && str[i] <= '9' && (str[i + 1] == '+' || str[i + 1] == '-' || str[i + 1] == '/')) {
//			for (j = strlen(str); j > i + 1; j--) {
//				str[j] = str[j - 1];
//			}
//			str[j] = ' ';
//		}
//		if ((str[i] == '+' || str[i] == '/' || str[i] == '-') && str[i + 1] >= '0' && str[i + 1] <= '9') {
//			for (j = strlen(str); j > i + 1; j--) {
//				str[j] = str[j - 1];
//			}
//			str[j] = ' ';
//		}
//
//	}
//
//	// - ������
//	// str null������ try
//	for (i = 0; i < strlen(str) + 1; i++) {
//
//		// - �� ������ �߰�
//		if (str[i] >= '0' && str[i] <= '9' || str[i] == '-') {
//			temp[k++] = str[i];
//		}
//		else {
//			//k�� - �� ������
//			if (temp[0] == '-' && k==1) {
//				continue;
//			}
//			// ���ڰ� ���� k > 1 �̸� ������ ���� �ÿ��� ���ڷ� ��ȯ
//			if (k != 0) {
//				temp[k] = 0;
//				num[m++] = atoi(temp);
//			}
//			k = 0;
//		}
//	}
//
//	for (i = 0; i < m; i++) {
//		printf(" %.0lf", num[i]);
//	}
//}
//4-3

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[101] = { 0 };
//	char temp[101] = { 0 };
//	double num[10];
//
//	gets(str);
//
//	int i, j, k = 0, m = 0;
//	char swap;
//	int size = strlen(str);
//
//	//90> 100 �� ���� �ϳ��� ���� ������� 1-2*4/2 �̷������� ����� ���� ������, �Է� ���ö� �ٸ�.
//	//�Ͽ�, ���ڸ� �Űܼ� �Է� ���ø� ������
//	for (i = 0; i < strlen(str); i++) {
//		if (str[i] >= '0' && str[i] <= '9' && (str[i + 1] == '+' || str[i + 1] == '-' || str[i + 1] == '/')) {
//			for (j = strlen(str); j > i + 1; j--) {
//				str[j] = str[j - 1];
//			}
//			str[j] = ' ';
//		}
//		if ((str[i] == '+' || str[i] == '/' || str[i] == '-') && str[i + 1] >= '0' && str[i + 1] <= '9') {
//			for (j = strlen(str); j > i + 1; j--) {
//				str[j] = str[j - 1];
//			}
//			str[j] = ' ';
//		}
//	}
//
//	j = 0;
//	char op[9] = { 0 };
//	for (i = 0; i < strlen(str) + 1; i++) {
//		//���� �����ڸ� ������ �迭�� ����
//		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
//			op[j++] = str[i];
//		}
//
//		//4-2
//		if (str[i] >= '0' && str[i] <= '9' || str[i] == '-') {
//			temp[k++] = str[i];
//		}
//		else {
//			//k�� - �� ������
//			if (temp[0] == '-' && k == 1) {
//				continue;
//			}
//			if (k != 0) {
//				temp[k] = 0;
//				num[m++] = atoi(temp);
//			}
//			k = 0;
//		}
//	}
//
//	// * / ���޾� ������ ���� 2 * 3 * 4 ������
//	// �����ڹ迭�� *,* ���ڹ迭�� 2,3,4 �� ���� ������ �ڷ� �ѱ�� ����� �� �ִ�.
//	// 2 3 4 >> 0 6 4 >> 0 0 24  ���� ��ü�� sum 
//	for (i = 0; i < j; i++) {
//		if (op[i] == '*')
//		{
//			num[i + 1] = num[i] * num[i + 1];
//			num[i] = 0;
//		}
//		else if (op[i] == '/') {
//
//			num[i + 1] = num[i] / num[i + 1];
//			num[i] = 0;
//		}
//	}
//
//	double sum = 0;
//	for (i = 0; i < m; i++) {
//		sum += num[i];
//	}
//
//	printf("%lf", sum);
//}
//
//
/////*
////123 + 2*3 - 4 / 2
////4/2*3 + 10
////*/