//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	
//	char temp[101] = { 0 };
//	char **p = (char**)malloc(N * sizeof(char*));
//
//	getchar();
//
//	int i;
//	for (i = 0; i < N; i++) {
//		gets(temp);
//		p[i] = (char*)malloc(strlen(temp)+1);
//		strcpy(p[i], temp);
//	}
//
//	char *swap;
//	int j;
//	for (i = 0; i < N; i++) {
//		for (j = i + 1; j < N; j++) {
//			if (strcmp(p[i] , p[j]) > 0) {
//				swap = p[i];
//				p[i] = p[j];
//				p[j] = swap;
//			}
//		}
//	}
//
//	for (i = 0; i < N; i++) {
//		printf("%s\n", p[i]);
//		free(p[i]);
//	}
//
//	free(p);
//}


/*
4
apricot
peach
willow
birch

apricot
birch
peach
willow
*/
