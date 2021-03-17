////과제 주석처리
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int *maxmin(int *ar);
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
//		printf("%d\n", *(maxmin(ar)));
//
//		// p 를 다시 ar로 초기화 시켜서 ar의 처음에 정수를 다시받음을 준비.
//		p = ar;
//	}
//}
//
//
//int *maxmin(int *ar) {
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
//
//	int sub = 0;
//	int near = 1000;
//	int *pos = NULL;
//
//	for (j = ar; j < ar + cnt; j++) {
//		// sub : 각 ar 값과 max - min 의 차이값
//		sub = (*j) - (max - min);
//		// - 일시 절대값으로
//		if (sub < 0) {
//			sub = -sub;
//		}
//
//		// near 보다 작을시 위치주소와 최소 가까운 정도를 저장.
//		if (near > sub) {
//			near = sub;
//			pos = j;
//		}
//	}
//	
//	// int형 포인터 주소를 반환.
//	return pos;
//}

//- ---------------------------------------------------------------------------------------


////2회차 코드줄이기
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int *maxmin(int *ar);
//
//int main() {
//
//	int ar[100];
//	int N;
//	scanf("%d", &N);
//
//	int i,j;
//	int *p = ar , *q = NULL ;
//	int target;
//	int min= 1000, sub;
//	int k;
//	// N try
//	for (i = 0; i < N; i++) {
//		//while (ar[j] 정수형 입력받고 1(ture) 면 실행)
//		//해당 배열원소에서 0 이면 빠져나온다.
//		while (scanf("%d", p) == 1)
//		{
//			if (*(p++) == 0) break;
//		}
//		
//		//maxmin 호출
//		q = maxmin(ar);
//		printf("%d\n",*q);
//		//첫 주소 초기화
//		p = ar;
//	}
//}
//
////주소값 반환 함수포인터
//int *maxmin(int *ar) {
//	int *p, *pos = NULL;
//	int max = -100000, min = 100000;
//	int target, sub;
//	//ar의 끝까지 확인
//	for (p = ar;; p++) {
//		// ar 원소 중 마지막을 알리는 0 이 해당하면 빠쪄나옴.
//		if (*p == 0) break;
//
//		//최댓값 초기화
//		if (max < *p) {
//			max = *p;
//		}
//		//최솟값 초기화
//		if (min > *p) {
//			min = *p;
//		}
//	}
//	//최대 최소를 뺀 target
//	target = max - min;
//	min = 100000;
//
//	//target 5
//	for (p = ar;; p++) {
//		if (*p == 0) break;
//		sub = *p - target;
//		//음수일 때 양수로변환
//		if (sub < 0) sub = -sub;
//		//min 값 초기화, 가장 가까운 배열 주소 저장
//		
//		if (min > sub) {
//			min = sub;
//			pos = p;
//		}
//	}
//	//pos 반환
//	return pos;
//}