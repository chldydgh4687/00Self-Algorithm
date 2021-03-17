//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	char str[101] = { 0 };
//	gets(str);
//
//	int i;
//	int cnt = 0;
//	for (i = 0; str[i]; i++) {
//		if (str[i] == 0)
//			break;
//		cnt++;
//	}
//
//	int j;
//	char save;
//
//	for (i = 1; i < cnt; i++) {
//		save=str[0];
//		for (j = 0; j < cnt; j++) {
//			str[j] = str[j + 1];
//		}
//		str[cnt - 1] = save;
//		printf("%s\n", str);
//	}
//}