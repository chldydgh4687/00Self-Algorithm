//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void input(int *p, int N);
//void output(int *p, int N);
//int main() {
//	int m, n, k; scanf("%d %d", &m, &n);
//	int m_ar[100], n_ar[100];
//	int *p, *q;
//	for (p = m_ar; p < m_ar + m; p++) scanf("%d", p);
//	for (p = n_ar; p < n_ar + n; p++) scanf("%d", p);
//	scanf("%d", &k);
//	int i = 0, j = 0, c=1;
//	p = m_ar, q = n_ar;
//	while ((p != m_ar + m ) && (q != n_ar + n)) {
//		for (p; p < m_ar + k*c; p++) {
//			printf(" %d", *p);
//		}
//		for (q; q < n_ar + k*c; q++) {
//			printf(" %d", *q);
//		}
//		++c;
//	}
//	if (p == m_ar + m) {
//		while (q != n_ar + n) {
//			printf(" %d", *q);
//			q++;
//		}
//	}
//	else if (q == n_ar + n) {
//		while (p != m_ar + m) {
//			printf(" %d", *p);
//			p++;
//		}
//	}
//	return 0;
//}
