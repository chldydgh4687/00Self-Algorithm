/*
������ n ������ ������ ����ؼ� k ���� ������� �Ѵ�.
�� �� �ʿ��� ���� ������ �ּڰ��� ���Ѵ�.

ù°�� n, k  �־�����.
��° �ٺ��� n���� �ٿ� ������ ��ġ ai�� ������������ �־�����.

https://www.acmicpc.net/problem/11047
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int n, k;
//	int ar[10] = { 0 };
//	int i, j;
//	int cnt = 0, sum = 0;
//
//	scanf("%d%d", &n, &k);
//
//	for (i = 0; i < n; i++) {
//		scanf("%d", &ar[i]);
//	}
//
//	for (i = n-1; i >= 0; i--) {
//		
//		if (k / ar[i] != 0) {
//			cnt = k / ar[i];
//			sum += cnt;
//			k = k % ar[i];
//		}
//		if (k == 0)
//			break;
//	}
//
//	printf("%d", sum);
//}

/*
10 4790
1
5
10
50
100
500
1000
5000
10000
50000
*/