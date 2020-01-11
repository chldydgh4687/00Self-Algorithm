////2회차 코드줄이기
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int correct(int *ar);
//int newnum(int *ar);
//
//int main() {
//
//	int ar[6];
//	int *p;
//	//입력
//	for (p = ar; p < ar + 6; p++) {
//		scanf("%d", p);
//	}
//	// 6개의 중복성 확인
//	printf("%d\n",correct(ar));
//	//출력
//	for (p = ar; p < ar + 6; p++) {
//		printf("%d ", *p);
//	}
//}
//
//int correct(int *ar){
//	
//	int *p;
//	int s_cnt = 0;
//	int *q, con_key = 0;
//	for (p = ar; p < ar + 6; p++) {
//		for (q = p+1; q < ar + 6; q++) {
//			//같으면 그자리에 있는 p의 값을 변경하기 때문에 이전을 확인안해도됨.
//			if (*p == *q) {
//
//				*p = newnum(ar);
//				//중복성 유무를 알리는 값
//				s_cnt = 1;
//				break;
//			}
//		}
//	}
//
//	if (s_cnt == 1) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//int newnum(int *ar) {
//	int *p,k = 1;
//	int i;
//	//해당 함수에서 k가 계속 1로 초기화가 되기 때문에
//	//k를 일일이 6번씩 돌리며 arr 대상에서 가장작은 수에서 같으면 증가시킴.
//	for (i = 0; i < 6; i++) {
//		for (p = ar; p < ar + 6; p++) {
//
//			if (*p == k) {
//				k++;
//			}
//		}
//	}
//	return k;
//}