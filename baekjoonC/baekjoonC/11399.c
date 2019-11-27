#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


/* ATM N 명 줄 서있다. i 번째 사람이 돈을 인출하는데 걸리는 시간은
Pi 분이다. 줄을 서는 순서에 따라서 돈을 인출하는데 필요한 시간의 합이 달라진다.
예를 들어, 총 5명이 있고 p1 = 3(3분), p2= 1(1분), p3 =4, p4 = 3, p5 = 2인 경우
[12345] 순서로 줄을 선다면 1번은 3분만에 돈을 뽑고 2번 사람은 1번 사람이 돈을
뽑을 때까지 기다리므로 3 + 1 = 4 분 줄을 서 있는 사람 수N과 각 사람이 돈을
인출하는데 걸리는 시간 pi*/
int main() {

	int n;
	int ar[1000] = { 0 };
	int *i, *j;
	int temp, sum = 0;

	scanf("%d", &n);

	for (i = ar; i < ar + n; i++) {
		scanf("%d", i);
	}

	for (i = ar; i < ar + n; i++) {
		for (j = i + 1; j < ar + n; j++) {
			if (*i >  *j) {
				temp = *(i);
				*(i) = *(j);
				*(j) = temp;
			}
		}
	}
	//내코드
	/*for (i = ar+n -1; i >= ar; i--) {
		for (j = i; j >= ar; j--) {
			sum += *j;
		}
	}*/

	//cpp코드 참고한 코드

	int save = ar[0];

	for (i = ar + 1; i < ar + n; i++) {
		*i += *(i - 1);
		save += *i;
	}

	printf("%d\n", sum);
}