#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


/* ATM N �� �� ���ִ�. i ��° ����� ���� �����ϴµ� �ɸ��� �ð���
Pi ���̴�. ���� ���� ������ ���� ���� �����ϴµ� �ʿ��� �ð��� ���� �޶�����.
���� ���, �� 5���� �ְ� p1 = 3(3��), p2= 1(1��), p3 =4, p4 = 3, p5 = 2�� ���
[12345] ������ ���� ���ٸ� 1���� 3�и��� ���� �̰� 2�� ����� 1�� ����� ����
���� ������ ��ٸ��Ƿ� 3 + 1 = 4 �� ���� �� �ִ� ��� ��N�� �� ����� ����
�����ϴµ� �ɸ��� �ð� pi*/
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

	for (i = ar+n -1; i >= ar; i--) {
		for (j = i; j >= ar; j--) {
			sum += *j;
		}
	}

	printf("%d\n", sum);
}