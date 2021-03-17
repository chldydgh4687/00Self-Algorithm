//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//typedef struct Complex {
//	double a;
//	double b;
//	double abs;
//}plex;
//plex *add(plex x, plex y);
//plex *sub(plex x, plex y);
//plex *abs_val(plex *x, plex *y, plex *z);
//void main() {
//	plex x,y,z;
//	scanf("%lf %lf", &x.a, &x.b);
//	scanf("%lf %lf", &y.a, &y.b);
//	scanf("%lf %lf", &z.a, &z.b);
//	abs_val(&x,&y,&z);
//	printf("%.1lf%+.1lfi\n",add(x, y)->a,add(x,y)->b);
//	printf("%.1lf%+.1lfi\n", sub(x, y)->a, sub(x, y)->b);
//	return;
//}
//
//plex *add(plex x, plex y) {
//	plex results;
//	results.a = x.a + y.a;
//	results.b = x.b + y.b;
//	return &results;
//}
//plex *sub(plex x, plex y) {
//	plex results;
//	results.a = x.a - y.a;
//	results.b = x.b - y.b;
//	return &results;
//}
//
//plex *abs_val(plex *p1, plex *p2, plex *p3) {
//	p1->abs = sqrt(p1->a * p1->a + p1->b * p1->b);
//	p2->abs = sqrt(p2->a * p2->a + p2->b * p2->b);
//	p3->abs = sqrt(p3->a * p3->a + p3->b * p3->b);
//	plex swap;
//	if (p1->abs > p2->abs) {
//		if (p1->abs > p3->abs) {
//			if (p2->abs > p3->abs) {
//				swap = *p3;
//				*p3 = *p2;
//				*p2 = swap;
//			}
//		}
//	}if (p1->abs < p2->abs) {
//		if (p2->abs > p3->abs) {
//			swap = *p2;
//			*p2 = *p1;
//			*p1 = swap;
//			if (p2->abs > p3->abs) {
//				swap = *p3;
//				*p3 = *p2;
//				*p2 = swap;
//			}
//		}
//	}if (p1->abs < p3->abs) {
//		if (p2->abs < p3->abs) {
//			swap = *p3;
//			*p3 = *p1;
//			*p1 = swap;
//			if (p2->abs > p3->abs) {
//				swap = *p3;
//				*p3 = *p2;
//				*p2 = swap;
//			}
//		}
//	}
//}