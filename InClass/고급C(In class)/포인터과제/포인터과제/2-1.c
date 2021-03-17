////과제 주석처리
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int ar[6];
//	int *p;
//
//	for (p = ar; p < ar + 6; p++) {
//		scanf("%d", p);
//	}
//
//	/*
//	p, q : ar 배열을 담는 포인터 변수
//	cnt : 중복 횟수
//	anything : 중복된 것이 있음을 알리는 1, 0 의 key 값 변수
//	*/
//
//	int *q, cnt = 0,anything = 0;
//	for (p = ar; p < ar + 6; p++) {
//		for (q = ar; q < ar + 6; q++) {
//
//			/*이전의 주소값에서 똑같이 가리키는 값을 찾으면 break*/
//			if (q < p) {
//				if (*p == *q) {
//					break;
//				}
//			}
//			/*q가 p 와 같은 지점에서 시작하여 같은 값을 찾아 cnt++ */
//			if (*p == *q) {
//				++cnt;
//			}
//		}
//		/* cnt 가 1이상일시 출력하며 중복된 것이 있음을 알리는 키값에 1을 줌*/
//		if (cnt > 1) {
//			printf("%d %d\n", *p, cnt);
//			anything = 1;
//		}
//		// count 초기화
//		cnt = 0;
//	}
//
//	// 중복임이 없을시 0 이므로 0을 출력
//	if (anything == 0) {
//		printf("0");
//	}
//}