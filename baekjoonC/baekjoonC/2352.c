//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//int main() {
//	int n; scanf("%d", &n);
//	int *line = (int*)malloc(n * sizeof(int));
//	int *distance = (int*)malloc(n * sizeof(int));
//	int *connect = (int*)malloc(n * sizeof(int));
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &line[i]);
//		connect[i] = i + 1;
//	}
//
//	for (int i = 0; i < n; i++) {
//		distance[i] = abs(i + 1 - line[i]);
//	}
//
//	int swap;
//	for (int i = 0; i < 6; i++) {
//		for (int j = i + 1; j < 6; j++) {
//			if (distance[j] < distance[i]) {
//				swap = distance[i];
//				distance[i] = distance[j];
//				distance[j] = swap;
//
//				swap = connect[i];
//				connect[i] = connect[j];
//				connect[j] = swap;
//			}
//		}
//	}
//
//	int count = 0;
//	for (int i = 0; i < 6; i++) {
//		++count;
//		if (connect[i] == 6)  
//			break;
//	}
//	printf("%d", count);
//	free(line);
//	free(distance);
//	free(connect);
//}