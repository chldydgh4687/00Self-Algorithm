////과제 주석처리
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int correct(int *ar);
//int newnum(int *arr);
//
//int main()
//{
//	int ar[6];
//	int *p;
//
//	for (p = ar; p < ar + 6; p++) {
//		scanf("%d", p);
//	}
//	// 0,1 중복 출력
//	printf("%d\n",correct(ar));
//	// 결과 출력
//	for (p = ar; p < ar + 6; p++) {
//		printf("%d ", *p);
//	}
//}
//
//int correct(int *ar) {
//	int *p, *i;
//	int *q, cnt = 0;
//	for (p = ar; p < ar + 6; p++) {
//		for (q = ar; q < ar + 6; q++) {
//
//			// 주소값이 작을 때, 주소값이 같을 때
//			if (q < p) {
//				if (*p == *q) {
//					break;
//				}
//				else {
//					continue;
//				}
//			}
//			else if (q == p) {
//				continue;
//			}
//
//			// 검색 대상이 뒷 대상에서 같을 때
//			if (*p == *q) {
//				// 해당 검색 대상을 newnum을 통한 가장 작은 수로 반환
//				*p = newnum(ar);
//				// 중복값이 존재 키값을 줌
//				cnt = 1;
//			}
//		}
//	}
//
//	//키값에 따른 리턴
//	if (cnt == 0) {
//		return 0;
//	}
//	else {
//		return 1;
//	}
//	
//}
//
//int newnum(int *arr) {
//
//	int *p, k = 1;
//	int i;
//	//해당 함수에서 k가 계속 1로 초기화가 되기 때문에
//	//k를 일일이 6번씩 돌리며 arr 대상에서 가장작은 수에서 같으면 증가시킴.
//
//	for (i = 0; i < 6; i++) {
//		for (p = arr; p < arr + 6; p++) {
//			if (*p == k) {
//				k = *p;
//				++k;
//			}
//		}
//	}
//
//	return k;
//}