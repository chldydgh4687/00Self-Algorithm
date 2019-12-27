//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int N;
//	scanf("%d",&N);
//
//	char **p = (char**)malloc(N*sizeof(char*));
//	getchar();
//	int i, size = 100,save_i;
//	for (i = 0; i < N; i++) {
//		
//		p[i] = (char*)malloc(101);
//		gets(p[i]);
//
//		if (size > strlen(p[i])) {
//			size = strlen(p[i]);
//			save_i = i;
//		}
//	}
//
//	puts(p[save_i]);
//
//	for (i = 0; i < N; i++) {
//		free(p[i]);
//	}
//	free(p);
//}
//
///*
//4
//program
//good
//this is string
//language
//
//good
//*/