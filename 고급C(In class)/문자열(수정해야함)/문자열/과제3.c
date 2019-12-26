//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char str[101] = { 0 };
//	char in[101] = { 0 };
//	gets(str);
//	gets(in);
//
//	int i,j,k=0;
//	int cnt = 0;
//	int same = 0;
//
//	for (i = 0; i < strlen(str); i++) {
//		for (j = i; j < i + strlen(in); j++) {
//			if (str[j] == in[k++]) {
//				++cnt;
//			}
//			else {
//				break;
//			}
//		}
//		if (cnt == strlen(in)) {
//			++same;
//			i = i + strlen(in) - 1;
//		}
//		k = cnt = 0;
//	}
//
//	printf("%d", same);
//
//}
//
///*
//I have a pen. I have an applepen. PPAP.
//pen
//*/


////3-2
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char str[101] = { 0 };
//	char in[101] = { 0 };
//	gets(str);
//	gets(in);
//
//	int i,j,k=0;
//	int cnt = 0;
//	int same = 0;
//
//	for (i = 0; i < strlen(str); i++) {
//		for (j = i; j < i + strlen(in); j++) {
//
//			if (str[j] == in[k++]) {
//
//				if (j != 0) {
//					if (j == i ) {
//						if (str[j - 1]!=' ' && str[j- 1] != '.') {
//							break;
//						}
//					}
//					else if (j == i + strlen(in) - 1) {
//						if (str[j + 1] != ' ' && str[j+1] != '.') {
//	
//							break;
//						}
//					}
//				}
//
//				++cnt;
//			}
//			else {
//				break;
//			}
//		}
//		if (cnt == strlen(in)) {
//			++same;
//			i = i + strlen(in) - 1;
//		}
//		k = cnt = 0;
//	}
//
//	printf("%d", same);
//
//}