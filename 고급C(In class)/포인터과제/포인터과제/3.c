//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void input(char *p, int N);
//void upper(char *p, int N);
//void lower(char *p, int N);
//int DOUBLE(char *p, int N);
//
//
//int main()
//{
//	int N;
//	scanf("%d", &N);
//
//	char str[20];
//	getchar();
//
//	input(str, N);
//	upper(str, N);
//	lower(str, N);
//	printf("%d\n",DOUBLE(str, N));
//}
//
//void input(char *p, int N) {
//	char *ip;
//	for (ip = p; ip < p + N; ip++) {
//		scanf("%c", ip);
//	}
//}
//void upper(char *p, int N) {
//	char *ip;
//	for (ip = p; ip < p + N; ip++) {
//		if (*ip >= 'A' && *ip <= 'Z') {
//			printf("%c", *ip);
//		}
//	}
//	printf("\n");
//}
//void lower(char *p, int N) {
//	char *ip;
//	for (ip = p; ip < p + N; ip++) {
//		if (*ip >= 'a' && *ip <= 'z') {
//			printf("%c", *ip);
//		}
//	}
//	printf("\n");
//}
//int DOUBLE(char *p, int N) {
//	char *ip;
//	char num[20];
//	int k = 0;
//	for (ip = p; ip < p + N; ip++) {
//		if (*ip >= '0' && *ip <= '9') {
//			num[k++] = *ip;
//		}
//	}
//	
//	int x = 0;
//	for (ip = num; ip < num + k; ip++) {
//		x *= 10;
//		x = x + ((*ip)-'0') * 1;
//	}
//	return x * 2;
//}
//
//
//


