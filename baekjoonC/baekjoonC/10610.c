//Ʋ��

///*
//10610 ��
//
//��� ��, �̸��ڴ� �쿬�� ��Ÿ����� ��� N�� ���Ҵ�.
//�̸��ڴ� 30�̶� ���� �����ϱ� ������, �״� ��Ÿ�����
//ã�� ���� ���Ե� ���ڵ��� ���� 30�� ����� �Ǵ� ���� 
//ū ���� ����� �;��Ѵ�.
//
//�̸��ڸ� ���� �װ� ����� �;��ϴ� ���� ����ϴ� ���α׷��� 
//�ۼ��϶�.
//
//�Է�
//N�� �Է¹ް� N�� �ִ� 10**5 ���� ���ڷ� �����Ǿ� ������, 0����
//�������� �ʴ´�.
//
//���
//�����ڰ� ����� �;��ϴ� ���� �����Ѵٸ� �� ���� ����϶�. �� ���� ��������
//�ʴ´ٸ�, -1�� ����϶�.
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



//Ǯ������ ��ȿ����..


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
//	if (num1 < num2)    // a�� b���� ���� ����
//		return -1;      // -1 ��ȯ
//
//	if (num1 > num2)    // a�� b���� Ŭ ����
//		return 1;       // 1 ��ȯ
//
//	return 0;    // a�� b�� ���� ���� 0 ��ȯ
//}
/*http://wookje.dance/2018/01/08/boj-10610-30/*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int i, sum, cnt[10];
char str[100002];

int main() {
	scanf("%s", str);

//CNT ������ ������ �ִ��� COUNT, �� �ڸ����� ��
	for (i = 0; str[i]; i++)
		cnt[str[i] - '0']++, sum += str[i] - '0';

//0�� ���ų� 3�� ����� ��� Ż���̹Ƿ� -1 ����Ʈ
	if (!cnt[0] || sum % 3) return ~printf("-1");
//CNT �ش� ���� 0 �ɶ����� ���� ������ ������� �����ش�.
	for (i = 9; i >= 0; i--)
		while (cnt[i]--) printf("%d", i);

	return 0;
}