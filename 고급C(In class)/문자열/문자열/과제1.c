//// 1-1
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char str[21] = { 0 };
//	char num[3] = { 0 };
//	int n;
//	gets(str);
//	scanf("%d", &n);
//
//	int i,j,k;
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
//				num[0] = str[i];
//				//��° �ڸ� �� 
//				if (str[i + 1] >= '0' && str[i + 1] <= '7') {
//					num[1] = str[i + 1];
//				}
//
//				// atoi ���ؼ� ���ĺ�
//				str[i] = 'A' + atoi(num)-1;
//
//				// ���ڸ��� �ϳ��� ���ĺ����� �ٲ㼭 �ϳ��� ���
//				for (j = i+2; j < strlen(str)+1; j++) {
//					str[j - 1] = str[j];
//				}
//			}
//			else {
//				//���ڸ� �� �� ���
//				num[0] = str[i];
//				str[i] = atoi(num) + 'A'-1;
//			}
//			// Ƚ�� n��ŭ
//
//			for (j = 0; j < n-1; j++) {
//				for (k = strlen(str); k > i ; k--){
//					str[k] = str[k-1];
//				}
//				i++;
//			}
//
//		}
//		else {
//			str[i] = ' ';
//		}
//	}
//	printf("%s", str);
//}

///*
//CLikp5tGLE?Qej15J
//2
//
//ENginEErING SchOOL
//*/

// 1 - 2


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//
//int main() {
//
//	char str[21] = { 0 };
//	char str2[21] = { 0 };
//	char save[21] = { 0 };
//	char num[3] = { 0 };
//
//	int n = 2;
//	gets(str);
//	gets(str2);
//
//	strcpy(save, str);
//
//	int i, j, k;
//
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
//				num[0] = str[i];
//				//��° �ڸ� �� 
//				if (str[i + 1] >= '0' && str[i + 1] <= '7') {
//					num[1] = str[i + 1];
//				}
//
//				// atoi ���ؼ� ���ĺ�
//				str[i] = 'A' + atoi(num) - 1;
//
//				// ���ڸ��� �ϳ��� ���ĺ����� �ٲ㼭 �ϳ��� ���
//				for (j = i + 2; j < strlen(str) + 1; j++) {
//					str[j - 1] = str[j];
//				}
//			}
//			else {
//				//���ڸ� �� �� ���
//				num[0] = str[i];
//				str[i] = atoi(num) + 'A' - 1;
//			}
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
//
//	int abkey = 0;
//	if (strcmp(str, str2) == 0) {
//		abkey = 1;
//	}
//
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
//				num[0] = str[i];
//				//��° �ڸ� �� 
//				if (str[i + 1] >= '0' && str[i + 1] <= '7') {
//					num[1] = str[i + 1];
//				}
//
//				// atoi ���ؼ� ���ĺ�
//				str[i] = 'A' + atoi(num) - 1;
//
//				// ���ڸ��� �ϳ��� ���ĺ����� �ٲ㼭 �ϳ��� ���
//				for (j = i + 2; j < strlen(str) + 1; j++) {
//					str[j - 1] = str[j];
//				}
//			}
//			else {
//				//���ڸ� �� �� ���
//				num[0] = str[i];
//				str[i] = atoi(num) + 'A' - 1;
//			}
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
//
//	int bakey = 0;
//	if (strcmp(str, save) == 0) {
//		bakey = 1;
//	}
//
//	if (abkey == 1 && bakey == 1) {
//		printf("3");
//	}
//	else if (abkey == 1 && bakey == 0) {
//		printf("1");
//	}
//	else if (abkey == 0 && bakey == 1) {
//		printf("2");
//	}
//	else {
//		printf("0");
//	}
//}


/*
Qej15J
SchOOL
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[21] = { 0 };
	char num[3] = { 0 };
	int n;
	gets(str);
	scanf("%d", &n);

	int i, j, k;
	for (i = 0; i < strlen(str); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += n;
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= n;
		}
		else if (str[i] >= '0' && str[i] <= '9') {
			//ù°�ڸ� 1Ȥ�� 2�̸�
			if (str[i] == '1' || str[i] == '2') {
				num[0] = str[i];
				//��° �ڸ� �� 
				if (str[i + 1] >= '0' && str[i + 1] <= '7') {
					num[1] = str[i + 1];
				}

				// atoi ���ؼ� ���ĺ�
				str[i] = 'A' + atoi(num) - 1;

				// ���ڸ��� �ϳ��� ���ĺ����� �ٲ㼭 �ϳ��� ���
				for (j = i + 2; j < strlen(str) + 1; j++) {
					str[j - 1] = str[j];
				}
			}
			else {
				//���ڸ� �� �� ���
				num[0] = str[i];
				str[i] = atoi(num) + 'A' - 1;
			}
			// Ƚ�� n��ŭ

			for (j = 0; j < n - 1; j++) {
				for (k = strlen(str); k > i; k--) {
					str[k] = str[k - 1];
				}
				i++;
			}

		}
		else {
			str[i] = ' ';
		}
	}
	printf("%s", str);
}