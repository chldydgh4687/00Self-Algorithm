//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int maxmin(int *ar);
//
//int main() {
//	int n,num;
//	scanf("%d", &n);
//
//	int ar[100] = { 0 };
//
//	int i, j = 0;
//
//	for (i = 0; i < n; i++) {
//		while (1) {
//			scanf("%d", &num);
//			if (num == 0) {
//				break;
//			}
//			else {
//				ar[j] = num;
//				j++;
//			}
//		}
//		printf("%d\n",maxmin(ar));
//		j = 0;
//	}
//}
//
//int maxmin(int *ar) {
//	
//	int max = -10000, min = 10000; 
//	int *i;
//	for (i = ar; i < ar+100; i++) {
//		if (*i == 0) {
//			break;
//		}
//		if (*i > max) {
//			max = *i;
//		}
//		if (*i < min) {
//			min = *i;
//		}
//		*i = 0;
//	}
//	return max - min;
//}
//
///*
//3
//3 7 6 -2 0
//13 7 6 1 2 0
//2 0
//
//*/