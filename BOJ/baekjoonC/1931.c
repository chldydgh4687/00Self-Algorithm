//회의실 문제 ( 틀림 )

//https://www.acmicpc.net/problem/1931

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//struct meet {
//	int st;
//	int en;
//};
//
//typedef struct meet m;
//
//int compare(m *a, m *b);
//int com_pare(m *a, m *b);
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	m *p = (m*)malloc(n * sizeof(m));
//	m swap;
//
//	int i, j;
//	int ist = 0, ien = 0;
//	int cnt = 0;
//
//	for (i = 0; i < n; i++) {
//		scanf("%d%d", &p[i].st, &p[i].en);
//	}
//
//	qsort(p, n, sizeof(m), compare);
//	qsort(p, n, sizeof(m), com_pare);
//
//	/*printf("\n");
//	for (i = 0; i < n; i++) {
//		printf("%d %d\n", p[i].st, p[i].en);
//	}*/
//
//	for (i = 0; i < n; i++) {
//		if (ien <= p[i].st)
//		{
//			ien = p[i].en;
//			ist = p[i].st;
//			++cnt;
//		}
//	}
//
//	printf("%d", cnt);
//	free(p);
//}
//int compare(m *a, m *b) {
//	if (a->en > b->en)
//	{
//		return 1;
//	}
//	else if (a->en < b->en) {
//		return -1;
//	}
//	else {
//		return 0;
//	}
//}
//int com_pare(m *a, m *b) {
//
//	if (a->en == b->en) {
//		if (a->st > b->st) {
//			return 1;
//		}
//		else if (a->st < b->st) {
//			return -1;
//		}
//		else {
//			return 0;
//		}
//	}
//	else {
//		return 0;
//	}
//}

/*알고리즘 복잡도에 의해서 qsort함수인 퀵정렬을 이용해야한다.*/

/*
if (a->en == b->en) {
if (a->st > b->st) {
return 1;
}
}*/
/*
5
1 1
4 4
2 2
1 2
3 4
*/


/*for (i = 0; i < n; i++) {
for (j = i + 1; j < n; j++) {
if (p[i].en > p[j].en)
{
swap = p[i];
p[i] = p[j];
p[j] = swap;
}
if (p[i].en == p[j].en) {
if (p[i].st > p[j].st) {
swap = p[i];
p[i] = p[j];
p[j] = swap;
}
}
}
}*/