////2회차 코드줄이기
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	int ar[6];
//	int *p;
//	//입력
//	for (p = ar; p < ar + 6; p++) {
//		scanf("%d", p);
//	}
//
//	int cnt = 0, s_cnt = 0;
//	int *q, con_key = 0;
//	// 6개의 중복성 확인
//	for (p = ar; p < ar + 6; p++) {
//		// p 해당하는 배열 원소가 이전에 중복성이 있는 것은 제외하여 continue 값; 
//		for (q = p - 1; q >= ar; q--) {
//			if (*p == *q) {
//				con_key = 1;
//				break;
//			}
//		}
//		//continue 실행
//		if (con_key == 1) {
//			con_key = 0;
//			continue;
//		}
//
//		// 중복성이 없는 새로운 수면 다음의 중복 개수를 추려내는 반복문 실행
//		for (q = p + 1; q < ar + 6; q++) {
//			if (*p == *q) {
//				++cnt;
//				//중복성 유무를 알리는 값
//				s_cnt = 1;
//			}
//		}
//		//중복성 개수가 2개 이상일시 출력
//		if (cnt > 0) {
//			printf("%d %d\n", *p, cnt+1);
//		}
//
//		//cnt 값 조기화
//		cnt = 0;
//	}
//	//6개 정수중에 중복이 있다면 0 출력
//	if (s_cnt == 0) {
//		printf("0");
//	}
//}