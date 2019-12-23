//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	char str1[21];
//	char str2[21];
//
//	int pos;
//	gets(str1);
//	gets(str2);
//	scanf("%d", &pos);
//
//	int i, j;
//	int cnt1 = 0;
//	for (i = 0; str1[i]; i++) {
//		if (str1[i] == 0) {
//			break;
//		}
//		cnt1++;
//	}
//
//	int cnt2 = 0;
//	for (i = 0; str2[i]; i++) {
//		if (str2[i] == 0) {
//			break;
//		}
//		cnt2++;
//	}
//	
//	// »ðÀÔ
//	str1[cnt1 + pos + 1] = 0;
//	for (j = 0; j < cnt2; j++) {
//		for (i = cnt1 + pos; i >= pos; i--) {
//			str1[i] = str1[i - 1];
//		}
//	}
//	
//	j = 0;
//	for (i = pos; i < pos + cnt2; i++) {
//		str1[i] = str2[j++];
//	}
//
//	printf("%s", str1);
//}