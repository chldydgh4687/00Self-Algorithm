////4-1
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[101] = { 0 };
//	char temp[4] = { 0 };
//	double num[10];
//
//	gets(str);
//
//	int i, j, k =0,m = 0;
//	for (i = 0; i < strlen(str)+1; i++) {
//
//		if (str[i] >= '0' && str[i] <= '9') {
//			temp[k++] = str[i];
//		}
//		else {
//			if (k != 0) {
//				temp[k] = 0;
//				num[m++] = atoi(temp);
//			}
//			k = 0;
//		}
//	}
//
//	for (i = 0; i < m; i++) {
//		printf(" %.0lf", num[i]);
//	}
//}


////4-2
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[101] = { 0 };
//	char temp[4] = { 0 };
//	double num[10];
//
//	gets(str);
//
//	int i, j, k =0,m = 0;
//	for (i = 0; i < strlen(str)+1; i++) {
//
//		if (str[i] >= '0' && str[i] <= '9' || str[i] == '-') {
//			temp[k++] = str[i];
//		}
//		else {
//			if (temp[0] == '-' && str[i]==' ') {
//				continue;
//			}
//			if (k != 0) {
//				temp[k] = 0;
//				num[m++] = atoi(temp);
//			}
//			k = 0;
//		}
//	}
//
//	for (i = 0; i < m; i++) {
//		printf(" %.0lf", num[i]);
//	}
//}

//4-3

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[101] = {0};
//	gets(str);
//
//	char temp[4] = {0};
//	double num[10];
//	char op[9] = { 0 };
//
//	int i,k=0,m=0,j = 0;
//	for (i = 0; i < strlen(str)+1; i++) {
//
//		if (str[i] >= '0' && str[i] <= '9' || str[i] == '-') {
//			if (str[i] == '-') {
//				op[j++] = str[i];
//			}
//			temp[k++] = str[i];
//		}
//		else {
//			if (str[i] == '+' || str[i] == '/' || str[i] == '*' ) {
//				op[j++] = str[i];
//			}
//			if (temp[0] == '-' && str[i] == ' ') {
//				continue;
//			}
//			if (k != 0) {
//				temp[k] = 0;
//				num[m++]=atoi(temp);
//			}
//			k = 0;
//		}
//	}
//
//	for (i = 0; i < j; i++) {
//		if (op[i] == '*') {
//			num[i+1] *= num[i];
//			num[i] = 0;
//		}
//		else if (op[i] == '/') {
//			num[i+1] = num[i] / num[i+1];
//			num[i] = 0;
//		}
//	}
//
//	double sum = 0;
//	for (i = 0; i < m; i++) {
//		sum += num[i];
//	}
//
//	printf("%lf\n", sum);
//}
//
///*
//123 + 2*3 - 4 / 2
//4/2*3 + 10
//*/