//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char str[100] = { 0 };
//	char num[3] = { 0 };
//	int n;
//	gets(str);
//	scanf("%d", &n);
//
//	int i, j, k;
//	for (i = 0; i < strlen(str); i++) {
//		if (str[i] >= 'A' && str[i] <= 'Z') {
//			str[i] += n;
//		}
//		else if (str[i] >= 'a' && str[i] <= 'z') {
//			str[i] -= n;
//		}
//		else if (str[i] >= '0' && str[i] <= '9') {
//			//ù°�ڸ� 1Ȥ�� 2�̸�
//			if (str[i] == '1' || str[i] == '2') {
//				if (str[i + 1] >= '0' && str[i + 1] <= '7') {
//					num[0] = str[i];
//					//��° �ڸ� �� 
//					num[1] = str[i + 1];
//					// atoi ���ؼ� ���ĺ�
//					str[i] = 'A' + atoi(num) - 1;
//					// ���ڸ��� �ϳ��� ���ĺ����� �ٲ㼭 �ϳ��� ���
//					str[i + 1] = str[i];
//					i++;
//					if (n > 2) {
//						for (j = 0; j < n - 2; j++) {
//							for (k = strlen(str); k > i; k--) {
//								str[k] = str[k - 1];
//							}
//							i++;
//						}
//					}
//					continue;
//				}
//			}
//			//���ڸ� �� �� ���
//			num[0] = str[i];
//			str[i] = atoi(num) + 'A' - 1;
//
//			// Ƚ�� n��ŭ
//
//			for (j = 0; j < n - 1; j++) {
//				for (k = strlen(str); k > i; k--) {
//					str[k] = str[k - 1];
//				}
//				i++;
//			}
//
//		}
//		else {
//			str[i] = ' ';
//		}
//	}
//	printf("%s\n", str);
//}
//3
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char str[100] = {0};
//	gets(str);
//
//	int N;
//	scanf("%d", &N);
//
//	char num[3];
//	int i,j,k;
//	int size = strlen(str);
//
//	for (i = 0; i < strlen(str); i++) {
//		//�빮��
//		if (str[i] >= 'A' && str[i] <= 'Z') {
//			str[i] += N;
//		}//�ҹ���
//		else if (str[i] >= 'a' && str[i] <= 'z') {
//			str[i] -= N;
//		}//����
//		else if (str[i] >= '0' && str[i] <= '9') {
//			num[0] = str[i];
//			//���ڸ��϶�
//			if (str[i] == '1' || str[i] == '2') {
//				//���ڸ��� �����϶�
//				if (str[i + 1] >= '0' && str[i + 1] <= '9') {
//					//num�� �����ڸ��� �߰�
//					num[1] = str[i + 1];
//					//���ĺ����� �ٲٴ� �����Ͽ� ���ڸ������� ��ó�� ���ڿ��� ���
//					for (j = i + 2; j <= strlen(str); j++) {
//						str[j - 1] = str[j];
//					}
//				}
//			}
//			//���ĺ� ��ȯ
//			str[i] = 'A' + atoi(num) - 1;
//			//Ƚ����ŭ �÷���
//			for (j = 0; j < N - 1; j++) {
//				for (k = strlen(str); k > i; k--) {
//					str[k] = str[k - 1];
//				}
//				i++;
//			}
//		}//�ٸ� ��ȣ�ϰ�� ����
//		else {
//			str[i] = ' ';
//		}
//	}
//	//���
//	printf("%s\n", str);
//}
//
///*
//CLikp5tGLE?Qej15J
//2
//*/

//�ڵ����ϰ��ϱ�