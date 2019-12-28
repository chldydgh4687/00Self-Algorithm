//틀림

///*
//10610 번
//
//어느 날, 미르코는 우연히 길거리에서 양수 N을 보았다.
//미르코는 30이란 수를 존경하기 때문에, 그는 길거리에서
//찾은 수에 포함된 숫자들을 섞어 30의 배수가 되는 가장 
//큰 수를 만들고 싶어한다.
//
//미르코를 도와 그가 만들고 싶어하는 수를 계산하는 프로그램을 
//작성하라.
//
//입력
//N을 입력받고 N은 최대 10**5 개의 숫자로 구성되어 있으며, 0으로
//시작하지 않는다.
//
//출력
//마르코가 만들고 싶어하는 수가 존재한다면 그 수를 출력하라. 그 수가 존재하지
//않는다면, -1을 출력하라.
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	int N;
//	scanf("%d", &N);
//
//	char *p = (char*)malloc(1);
//	int a = N;
//	int r,i = 0;
//	while (a != 0) {
//		r = a % 10;
//		a = a / 10;
//		p[i] = r + '0';
//		i++;
//		p = (char*)realloc(p, i+1);
//	}
//
//	int size = i + 1, max = -1;
//	int j,k;
//	char swap;
//	for (i = 0; i < size; i++) {
//		for (j = i+1; j < size; j++) {
//			swap = p[i];
//			p[i] = p[j];
//			p[j] = swap;
//
//			for (k = 0; k < size; k++) {
//				printf("%c", p[k]);
//			}
//			printf("\n");
//		}
//		if (atoi(p) % 30 == 0) {
//			if (max < atoi(p)) {
//				max = atoi(p);
//			}
//		}
//	}
//
//	if (max == -1) {
//		printf("%d",max);
//	}
//	else {
//		printf("%d", max);
//	}
//
//	free(p);
//}
