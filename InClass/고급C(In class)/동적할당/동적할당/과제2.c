//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct st {
//	char *str;
//	int cnt;
//}s;
//
//int main()
//{
//	int N;
//	scanf("%d", &N);
//
//	s *p = (s*)malloc(N * sizeof(s));
//	char temp[1000] = { 0 };
//
//	int i, j;
//	getchar();
//	for (i = 0; i < N; i++) {
//		//문자열 입력받기
//		gets(temp);
//		p[i].str = (char*)malloc((strlen(temp) + 1) * sizeof(char));
//		strcpy(p[i].str, temp);
//		p[i].cnt = 0;
//
//		//자음조건
//		for (j = 0; j < strlen(p[i].str); j++) {
//			if ((p[i].str[j] >= 'a' && p[i].str[j] <= 'z') || (p[i].str[j] >= 'A' && p[i].str[j] <= 'Z')) {
//				if (p[i].str[j] != 'a' && p[i].str[j] != 'i'&& p[i].str[j] != 'e'&& p[i].str[j] != 'o'&& p[i].str[j] != 'u' &&p[i].str[j] != 'A' && p[i].str[j] != 'I'&& p[i].str[j] != 'E'&& p[i].str[j] != 'O'&& p[i].str[j] != 'U') {
//					/*printf("%c\n", p[i].str[j]);*/
//					(p[i].cnt)++;
//				}
//			}
//		}
//	}
//
//	//자음개수 내림차순 정렬
//	s swap, save;
//	for (i = 1; i < N; i++) {
//		save = p[i];
//		for (j = i - 1; j >= 0 && p[j].cnt < save.cnt; j--) {
//			p[j + 1] = p[j];
//		}
//		p[j + 1] = save;
//	}
//
//
//	for (i = 0; i < N; i++) {
//		//printf("%s %d\n", p[i].str,p[i].cnt);
//		printf("%s\n", p[i].str);
//		free(p[i].str);
//	}
//	free(p);
//}

/*선택 >> 삽입 정렬*/

/*
5
History
Politics
DonQuixote
LaPeste
Chaos

3
History
Politics
DonQuixote
*/