//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	char str1[21];
//	char str2[21];
//
//	int pos, reverse;
//	char swap;
//	gets(str1);
//	gets(str2);
//	scanf("%d", &pos);
//	scanf("%d", &reverse);
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
//	if (reverse == 1) {
//		for (i = 0; i < cnt2 / 2; i++) {
//			swap = str2[i];
//			str2[i] = str2[cnt2 - i - 1];
//			str2[cnt2 - i - 1] = swap;
//		}
//
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
//
//}