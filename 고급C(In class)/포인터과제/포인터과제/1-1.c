////과제 주석처리
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int maxmin(int *ar);
//
//int main() {
//
//	int N;
//	scanf("%d", &N);
//
//	int ar[100];
//
//	int i, *p = ar;
//
//	//N번을 반복
//	for (i = 0; i < N; i++) {
//		// P 포인터에 ar 배열 주소값을 받아 0 이 입력될시 break;
//		while (1) {
//			scanf("%d", p);
//			if (*p == 0)
//				break;
//			p++;
//		}
//		// maxmin 을 구하기위한 함수를 실행
//		printf("%d\n", maxmin(ar));
//
//		// p 를 다시 ar로 초기화 시켜서 ar의 처음에 정수를 다시받음을 준비.
//		p = ar;
//	}
//}
//
//
//int maxmin(int *ar) {
//
//	int max = -1000;
//	int min = 1000;
//	int  *j, cnt = 0;
//
//	//배열의 주소를 이용하여 배열의 크기를 알기위한 0 까지의 cnt
//	for (j = ar; j < ar + 100; j++) {
//		if (*j == 0)
//			break;
//		++cnt;
//	}
//
//	//max 보다 더 크면 max 에 대입 min 보다 더 작으면 min에 대입
//	for (j = ar; j < ar + cnt; j++) {
//		if (max < *j) {
//			max = *j;
//		}
//		if (min > *j) {
//			min = *j;
//		}
//	}
//
//	//max-min 을 리턴
//	return max - min;
//}
//
///*
//3
//3 7 6 -2 0
//13 7 6 1 2 0
//2 0
//*/