//������ �� ����Ϸ����ϸ� �ȵ�.
//k�� ���� �� �Ÿ��� ��꿡�� �� �� ����. (�ٽ�)

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	int n, n_distance; scanf("%d", &n);
//	int k; scanf("%d", &k);
//	int *n_ar = (int*)malloc(n * sizeof(int));
//	int *k_nnum = (int*)malloc(k * sizeof(int));
//	int *k_distance = (int*)malloc(k * sizeof(int));
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &n_distance);
//		n_ar[i] = n_distance;
//	}
//	
//	int swap;
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (n_ar[j] < n_ar[i]) {
//				swap = n_ar[j];
//				n_ar[j] = n_ar[i];
//				n_ar[i] = swap;
//			}
//		}
//	}
//	
//	k_nnum[0] = 1;
//	for (int i = 1; i <= n - (k - 1); i++) {
//		k_
//	}
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//	int n; scanf("%d", &n);
//	int k; scanf("%d", &k);
//	int *n_ar = (int *)malloc(n * sizeof(int));
//	int *distance = (int *)malloc((n-1) * sizeof(int));
//
//	for (int i = 0; i < n; i++) 
//		scanf("%d", &n_ar[i]);
//
//	int swap;
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (n_ar[i] > n_ar[j]) {
//				swap = n_ar[j];
//				n_ar[j] = n_ar[i];
//				n_ar[i] = swap;
//			}
//		}
//	}
//
//	for (int i = 0; i < n-1; i++) {
//		distance[i] = n_ar[i + 1] - n_ar[i];
//	}
//	//�Ÿ�����
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = i + 1; j < n - 1; j++) {
//			if (distance[i] > distance[j]) {
//				swap = distance[j];
//				distance[j] = distance[i];
//				distance[i] = swap;
//			}
//		}
//	}
//	//k�� ���ؼ� �Ÿ����� ���� �� �Ÿ��� ������ k-1 ��ŭ �� �� �ִ�.
//	int sum = 0;
//	for (int i = 0; i < (n - 1) - (k - 1); i++) {
//		sum += distance[i];
//	}
//	printf("%d", sum);
//	free(distance);
//	free(n_ar);
//}