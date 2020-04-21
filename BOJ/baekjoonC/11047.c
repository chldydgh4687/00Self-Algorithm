/*
동전스 n 동전을 적절히 사용해서 k 값을 만드려고 한다.
이 때 필요한 동전 개수의 최솟값을 구한다.

첫째줄 n, k  주어진다.
둘째 줄부터 n개의 줄에 동전의 가치 ai가 오름차순으로 주어진다.

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