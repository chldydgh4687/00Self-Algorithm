//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	
//	int N;
//	scanf("%d", &N);
//
//	int num[4];
//	int *p = num;
//	int r, cnt = 0;
//	while (1) {
//		r = N % 10;
//		N /= 10;
//		if (r == 0) {
//			break;
//		}
//		*(p++) = r;
//		++cnt;
//	}
//
//	int i;
//	for (i = cnt-1; i >= 0; i--) {
//		if (num[i] == 1)
//			printf("one ");
//		else if (num[i] == 2)
//			printf("two ");
//		else if (num[i] == 3)
//			printf("three ");
//		else if (num[i] == 4)
//			printf("four ");
//		else if (num[i] == 5)
//			printf("five ");
//		else if (num[i] == 6)
//			printf("six ");
//		else if (num[i] == 7)
//			printf("seven ");
//		else if (num[i] == 8)
//			printf("eight ");
//		else if (num[i] == 9)
//			printf("nine ");
//
//		if (i == 3)
//			printf("THO ");
//		else if (i == 2)
//			printf("HUN ");
//		else if (i == 1)
//			printf("TEN ");
//	}
//}