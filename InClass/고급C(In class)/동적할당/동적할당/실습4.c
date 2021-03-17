//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//
//	char **p = (char**)malloc(n*sizeof(char*));
//	int i;
//	for (i = 0; i < n; i++) {
//		p[i] = (char*)malloc(m);
//	}
//
//	int j;
//	char st = 'a';
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < m; j++) {
//			p[i][j] = st;
//			if (p[i][j] == 'z'+1) {
//				p[i][j] = st = 'A';
//			}
//			if (p[i][j] == 'Z'+1) {
//				p[i][j] = st = 'a';
//			}
//			printf("%c ", p[i][j]);
//			++st;
//		}
//		printf("\n");
//	}
//
//	for (i = 0; i < n; i++) {
//		free(p[i]);
//	}
//	free(p);
//}


/*
6 6

a b c d e f 
g h i j k l
m n o p q r
s t u v w x
y z A B C D 
E F G H I J 
*/