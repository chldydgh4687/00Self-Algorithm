//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//void StringAdd(char arr[], char ch, int index);
//int Convertor(char x);
//
//int main()
//{
//	char str[21] = { 0 };
//	int oddeven[21] = { 0 };
//
//	gets(str);
//	char stc;
//	//홀수짝수냐 구분
//	int i, j, c, k = 0;
//	for (i = 0; i < strlen(str); i++) {
//
//		if (Convertor(str[i]) % 2 == 0) {
//			//even
//			oddeven[k++] = 2;
//		}
//		else {//odd
//			oddeven[k++] = 1;
//		}
//	}
//
//	//문자열을 늘리고 문자를 대입
//	for (i = 0; i < strlen(str); i++) {
//		if (oddeven[i] == 1 && oddeven[i + 1] == 1) {
//
//			for (j = strlen(str); j > i; j--) {
//				str[j] = str[j - 1];
//				oddeven[j] = oddeven[j - 1];
//
//			}
//
//			StringAdd(str, '+', i + 1);
//			i++;
//		}
//		else if (oddeven[i] == 2 && oddeven[i + 1] == 2) {
//
//			for (j = strlen(str); j > i; j--) {
//				str[j] = str[j - 1];
//				oddeven[j] = oddeven[j - 1];
//			}
//
//			StringAdd(str, '*', i + 1);
//			i++;
//		}
//	}
//
//	printf("%s", str);
//}
//
//int Convertor(char x) {
//
//	return x - '0';
//}
//
//void StringAdd(char arr[], char ch, int index) {
//
//	arr[index] = ch;
//
//}