//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char str[101] = { 0 };
//	char result[101] = { 0 };
//	int num;
//	scanf("%d", &num);
//
//	getchar();
//	int scnt = 0;
//	char *p = str;
//
//	int ncnt = 0;
//	int min = 1000;
//
//	//input
//	while (1) {
//		scanf("%c", p);
//		if (*p == '\n') {
//			scnt++;
//		}
//		if (scnt == num)
//			break;
//		p++;
//	}
//
//	//min
//	int i, pos;
//	for (i = 0; str[i]; i++) {
//		if (str[i] == '\n') {
//			if (min > ncnt) {
//				min = ncnt;
//				pos = i - ncnt;
//			}
//			ncnt = 0;
//			i++;
//		}
//		ncnt++;
//	}
//
//	//output
//	int j = 0;
//	for (i = pos; i < pos + min; i++) {
//		result[j++] = str[i];
//	}
//
//	printf("%s", result);
//}

/*
4
Good
Program
This is string
language

Good
*/