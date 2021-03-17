//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int check(char *str);
//
//int main() {
//
//	char str[31] = { 0 };
//	gets(str);
//
//	printf("%d %d",strlen(str),check(str));
//}
//
//int check(char *str) {
//
//	int i;
//	int cnt=0;
//	for (i = 0; i < strlen(str) / 2; i++) {
//		if (str[i] == str[strlen(str) - 1 - i])
//			cnt++;
//		else {
//			break;
//		}
//	}
//
//	if (cnt == strlen(str) / 2) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}