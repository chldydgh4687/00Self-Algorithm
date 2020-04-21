#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int k, n, swap, count = 0;
	int *n_num = NULL;
	int p_range, stone;
	while (1) {
		scanf("%d %d", &k, &n);
		if (k == -1 && n == -1) break;
		n_num = (int*)malloc(n * sizeof(int));
		for (int i = 0; i < n; i++) scanf("%d", &n_num[i]);
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (n_num[j] < n_num[i]) {
					swap = n_num[i];
					n_num[i] = n_num[j];
					n_num[j] = swap;
				}
			}
		}
		for (int i = 0; i < n; ) {
			p_range = n_num[i];
			while (i < n && n_num[i] <= p_range + k) i++;
			stone = n_num[i - 1];
			while (i < n && n_num[i] <= stone + k) i++;

			++count;
		}
		printf("%d\n", count);
		count = 0;
		free(n_num);
	}
	return 0;
}