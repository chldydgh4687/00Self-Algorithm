//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str1[81] = { 0 };
//	char str2[11] = { 0 };
//
//	gets(str1);
//	gets(str2);
//
//	int i,j,k = 0;
//	int cnt = 0;
//	int same = 0;
//	for (i = 0; str1[i]; i++) {
//		for (j = i; j < i + strlen(str2); j++) {
//			if (str1[j] == str2[k++]) {
//				cnt++;
//			}
//			else {
//				break;
//			}
//		}
//		if (cnt == strlen(str2)) {
//			++same;
//			i += cnt - 1;
//		}
//		k = 0;
//		cnt = 0;
//	}
//
//	printf("%d",same);
//}