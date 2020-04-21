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



//풀었으나 비효율적..


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void thirty(int insect, int*p, int*q, int size);
//int compare(const void *a,const void *b);
//int main()
//{
//	int N;
//	scanf("%d", &N);
//
//	int *p = (int*)malloc(1*sizeof(int));
//	int a = N;
//	int r, i = 0;
//	while (a != 0) {
//		r = a % 10;
//		a = a / 10;
//		p[i] = r;
//		i++;
//		p = (int*)realloc(p, (i+1)*sizeof(int));
//	}
//
//	
//	
//	int size = i;
//
//	qsort(p, size, sizeof(int), compare);
//	int *q = (int*)malloc(size * sizeof(int));
//	
//	if (size == 1) {
//		printf("-1");
//		free(p);
//		free(q);
//		return 0;
//	}
//	else if (size == 2) {
//		thirty( 90, p, q, size);
//		free(p);
//		free(q);
//		return 0;
//	}
//	else if (size == 3) {
//		thirty(990, p, q, size);
//		free(p);
//		free(q);
//		return 0;
//	}
//	else if (size == 4){
//		thirty(9990, p, q, size);
//		free(p);
//		free(q);
//		return 0;
//	}
//	else {
//		thirty(99990, p, q, size);
//		free(p);
//		free(q);
//		return 0;
//	}
//
//}
//
//void thirty(int insect, int*p, int*q, int size) {
//
//	int in = insect, a;
//	int i = 0, j, k;
//	int cnt = 0;
//
//	while (1) {
//		a = in % 10;
//		in = in / 10;	
//		*(q+i) = a;
//
//		i++;
//		if (i == size) {
//			qsort(q, size, sizeof(int), compare);
//
//			for (j = 0; j < size; j++) {
//				/*printf(" %d, %d %d\n", j,*(p + j), *(q + j));*/
//				if (*(p+j) == *(q + j)) {
//					cnt++;
//				}
//				else {
//					break;
//				}
//			}
//			if (cnt == size) {
//				printf("%d", insect);
//				break;
//			}
//			else {
//				insect -= 30;
//				in = insect;
//				i = 0;
//				cnt = 0;
//				if (insect == 0) {
//					printf("-1");
//					break;
//				}
//			}
//		}
//	}
//}
//int compare(const void *a, const void *b) {	
//
//	int num1 = *(int *)a;
//	int num2 = *(int *)b;
//
//	if (num1 < num2)    // a가 b보다 작을 때는
//		return -1;      // -1 반환
//
//	if (num1 > num2)    // a가 b보다 클 때는
//		return 1;       // 1 반환
//
//	return 0;    // a와 b가 같을 때는 0 반환
//}
/*http://wookje.dance/2018/01/08/boj-10610-30/*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int i, sum, cnt[10];
//char str[100002];
//
//int main() {
//	scanf("%s", str);
//
////CNT 정수가 무엇이 있는지 COUNT, 각 자리수의 합
//	for (i = 0; str[i]; i++)
//		cnt[str[i] - '0']++, sum += str[i] - '0';
//
////0이 없거나 3의 배수일 경우 탈락이므로 -1 프린트
//	if (!cnt[0] || sum % 3) return ~printf("-1");
////CNT 해당 정수 0 될때까지 높은 수부터 순서대로 꺼내준다.
//	for (i = 9; i >= 0; i--)
//		while (cnt[i]--) printf("%d", i);
//
//	return 0;
//}