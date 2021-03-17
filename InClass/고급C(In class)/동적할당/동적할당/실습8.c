//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int N;
//	scanf("%d", &N);
//
//	char *p = (char*)malloc(N);
//	char temp[3] = { 'c','a','t' };
//	
//	getchar();
//	gets(p);
//
//
//	int i,j,pos = 0, cnt = 0, same = 0;
//	for (i = 0; i < N; i++) {
//		for (j = 0; j < 3; j++) {
//			if (p[i + j] == temp[pos++]) {
//				cnt++;
//			}
//			else {
//				break;
//			}
//		}
//		if (cnt == 3) {
//			++same;
//		}
//		pos = cnt = 0;
//	}
//
//	printf("%d", same);
//}


/*
7
catbcat
*/