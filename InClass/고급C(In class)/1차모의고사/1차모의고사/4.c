//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//struct st {
//	char name[10];
//	char book[5][20];
//	int score[5];
//	int cnt, pcnt;
//};
//typedef struct st s;
//
//int main()
//{
//	s ar[100] = { 0, };
//
//	int N;
//	scanf("%d", &N);
//
//	int i, k;
//	char book_n[20] = { 0 };
//
//	for (i = 0; i < N; i++) {
//		getchar();
//		gets(ar[i].name);
//		ar[i].cnt = 0;
//		ar[i].pcnt = 0;
//
//		for (k = 0; k < 6; k++) {
//			scanf("%s", book_n);
//			if (book_n[0] == '0') {
//				break;
//			}
//			strcpy(ar[i].book[k], book_n);
//
//			scanf("%d", &ar[i].score[k]);
//			++ar[i].cnt;
//			if (ar[i].score[k] >= 50) {
//				++ar[i].pcnt;
//			}
//		}
//	}
//
//	for (i = 0; i < N; i++) {
//		printf("%s %d%%\n", ar[i].name, (int)(((double)ar[i].pcnt / 5) * 100));
//	}
//}
//
///*
//3
//ann
//h 60
//p 40
//c 100
//l 10
//d 10
//0
//branden
//l 70
//0
//chris
//0
//*/