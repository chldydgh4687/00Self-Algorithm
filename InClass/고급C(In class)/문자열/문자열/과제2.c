//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char str[12] = { 0 };
//	gets(str);
//
//	char add_str[4] = "add";
//	char sub_str[4] = "sub";
//	char div_str[4] = "div";
//	char mul_str[4] = "mul";
//
//	char temp[4] = { 0 };
//	char num1[4] = { 0 };
//	char num2[4] = { 0 };
//
//	int i, j = 0;
//	int cnt = 0;
//	char op;
//
//	for (i = 0; i < strlen(str); i++) {
//		if (str[i] == ' ' ) {
//			j = 0;
//			++cnt;
//			continue;
//		}
//		if (cnt == 0) {
//			temp[j++] = str[i];
//			if (i == 2) {
//				if (strcmp(temp, add_str) == 0) {
//					op = '+';
//				}
//				else if (strcmp(temp, sub_str) == 0) {
//					op = '-';
//				}
//				else if (strcmp(temp, div_str) == 0) {
//					op = '/';
//				}
//				else if (strcmp(temp, mul_str) == 0) {
//					op = '*';
//				}
//			}
//		}		
//		else if (cnt == 1) {
//			num1[j++] = str[i];
//		}
//		else if (cnt == 2) {
//			num2[j++] = str[i];
//		}	
//	}
//
//	int result = 0;
//	if (op == '+') {
//		result = atoi(num1) + atoi(num2);
//	}
//	else if (op == '-') {
//		result = atoi(num1) + atoi(num2);
//	}
//	else if (op == '/') {
//		result = atoi(num1) + atoi(num2);
//	}
//	else if (op == '*') {
//		result = atoi(num1) + atoi(num2);
//	}
//
//	printf("%d", result);
//}
//
///*
//add 121 17
//mul 14 3
//*/