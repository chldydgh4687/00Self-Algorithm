////2회차 코드줄이기
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void input(char *p, int N);
//void upper(char *p, int N);
//void lower(char *p, int N);
//int DOUBLE(char *p, int N);
//
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	//scanf 에 enter값을 getchar로 날려줌.
//	getchar();
//
//	char ar[20];
//	input(ar, N);
//	upper(ar, N);
//	lower(ar, N);
//	printf("%d",DOUBLE(ar, N));
//}
//
//void input(char *p, int N) {
//	char *q;
//	for (q = p; q < p + N; ++q) {
//		scanf("%c", q);
//	}
//}
//void upper(char *p, int N) {
//	char *q;
//	int i = 0;
//	for (q = p; q < p + N; ++q) {
//		if (*q >= 'A' && *q <= 'Z') {
//			printf("%c", *q);
//			i = 1;
//		}
//	}
//	//대문자가 없을시 \n 미출력.
//	if (i == 1) {
//		printf("\n");
//	}
//}
//void lower(char *p, int N) {
//	char *q;
//	int i = 0;
//	for (q = p; q < p + N; ++q) {
//		if (*q >= 'a' && *q <= 'z') {
//			printf("%c", *q);
//			i = 1;
//		}
//	}//소문자가 없을시 \n 미출력.
//	if (i == 1) {
//		printf("\n");
//	}
//}
//int DOUBLE(char *p, int N) {
//	char *q;
//	int num = 0;
//	for (q = p; q < p + N; ++q) {
//		if (*q >= '0' && *q <= '9') {
//			//num : 정수 초기화
//			// 10 자릿수 이동
//			// *q - '0' 일의자리
//			num = num * 10 + (*q - '0');
//		}
//	}
//	return num * 2;
//}
