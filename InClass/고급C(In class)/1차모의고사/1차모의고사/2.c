//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[101] = { 0 };
//	gets(str);
//
//	char temp[101] = { 0 };
//
//	int N;
//	scanf("%d", &N);
//
//	int pos[101] = { 0 };
//	int i, j;
//	int k = 0;
//
//	pos[k++] = 0;
//	for (i = 0; i <= strlen(str); i++)
//	{
//		if (str[i] == ' ' || str[i] == 0) {
//			pos[k++] = i + 1;
//		}
//	}
//
//	int st = pos[N - 1];
//	int en = pos[N];
//	k = 0;
//	for (i = st; i < en - 1; i++) {
//		temp[k++] = str[i];
//	}
//
//	printf("%s", temp);
//}
//
///*
//tomorrow is a mysetry
//4
//*/