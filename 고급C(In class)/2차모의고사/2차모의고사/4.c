#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct student {
	int sn;
	double a;
	double b;
	double sum;
};
typedef struct student s;
int main() {
	int n;
	scanf("%d", &n);

	s *p = (s*)malloc(n * sizeof(s));
	s *pass = (s*)malloc(n * sizeof(s));
	s swap;
	int i, j;
	for (i = 0; i < n; i++) {
		scanf("%d %lf %lf", &p[i].sn, &p[i].a, &p[i].b);
		p[i].sum = 0.4 *p[i].a + 0.6*p[i].b;
	}

	//합산
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (p[i].sum < p[j].sum) {
				swap = p[i];
				p[i] = p[j];
				p[j] = swap;
			}
		}
	}
	int range = n*0.6;
	int add_range = n*0.8;
	int cut = p[range - 1].sum;
	int save = 0, key = 0;
	//동점자 통과
	for (i = 0; i < n; i++) {
		if (p[i].sum >= cut)
			pass[i] = p[i];
		else {
			break;
		}
	}
	save = i;



	if (i < add_range) {

		//2차
		for (i = 0; i < n; i++) {
			for (j = i + 1; j < n; j++) {
				if (p[i].b < p[j].b) {
					swap = p[i];
					p[i] = p[j];
					p[j] = swap;
				}
			}
		}

		for (i = 0; i < n; i++) {
			for (j = 0; j < save; j++) {
				if (p[i].sn == pass[j].sn) {
					key = 1;
				}
			}
			if (key == 1) {
				key = 0;
				continue;
			}
			if (save >= add_range) {
				break;
			}
			if (key == 0) {
				pass[save++] = p[i];
			}
		}
	}


	for (i = 0; i < save; i++) {
		for (j = i + 1; j < save; j++) {
			if (pass[i].sn > pass[j].sn) {
				swap = pass[i];
				pass[i] = pass[j];
				pass[j] = swap;
			}
		}
	}

	for (i = 0; i < save; i++) {
		printf("%d\n", pass[i].sn);
	}
	free(p);
	free(pass);
	return 0;
}
/*
10
12345 15 86
12346 52 68
12347 55 90
12348 32 88
12349 22 12
12350 65 9
12351 1 100
12352 2 10
12353 50 90
12354 90 100
*/