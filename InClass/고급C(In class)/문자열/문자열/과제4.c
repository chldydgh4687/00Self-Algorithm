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
//	gets(str);
//
//	int i, j, k =0,m = 0;
//	//str 공백까지 try
//	for (i = 0; i < strlen(str)+1; i++) {
//		//해당위치가 숫자면 temp에 넣는다.
//		if (str[i] >= '0' && str[i] <= '9') {
//			temp[k++] = str[i];
//		}//해당위치가 숫자가아닌 기호면
//		else {
//			//k가 채워져있으면
//			if (k != 0) {
//				//temp의 마지막에 널값을 넣고 atoi를 통하여
//				//숫자로 변환하여 숫자배열에 대입
//				temp[k] = 0;
//				num[m++] = atoi(temp);
//			}
//			//temp의 k를 다시 처음으로 초기화
//			k = 0;
//		}
//	}
//	//출력
//	for (i = 0; i < m; i++) {
//		printf(" %.0lf", num[i]);
//	}
//}


////4-2
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[101] = { 0 };
//	char temp[101] = { 0 };
//	double num[10];
//
//	gets(str);
//
//	int i, j, k = 0, m = 0;
//	char swap;
//	int size = strlen(str);
//	//90> 100 답 벡터 하나의 값이 공백없이 1-2*4/2 이런식으로 계산을 했을 때여서, 입력 예시랑 다름.
//	//하여, 문자를 옮겨서 입력 예시를 맞춰줌
//	for (i = 0; i < strlen(str); i++) {
//		if (str[i] >= '0' && str[i] <= '9' && (str[i + 1] == '+' || str[i + 1] == '-' || str[i + 1] == '/')) {
//			for (j = strlen(str); j > i + 1; j--) {
//				str[j] = str[j - 1];
//			}
//			str[j] = ' ';
//		}
//		if ((str[i] == '+' || str[i] == '/' || str[i] == '-') && str[i + 1] >= '0' && str[i + 1] <= '9') {
//			for (j = strlen(str); j > i + 1; j--) {
//				str[j] = str[j - 1];
//			}
//			str[j] = ' ';
//		}
//
//	}
//
//	// - 꺼내기
//	// str null값까지 try
//	for (i = 0; i < strlen(str) + 1; i++) {
//
//		// - 일 때까지 추가
//		if (str[i] >= '0' && str[i] <= '9' || str[i] == '-') {
//			temp[k++] = str[i];
//		}
//		else {
//			//k에 - 만 있을시
//			if (temp[0] == '-' && k==1) {
//				continue;
//			}
//			// 숫자가 들어가면 k > 1 이며 공백이 왔을 시에는 숫자로 반환
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
//	char str[101] = { 0 };
//	char temp[101] = { 0 };
//	double num[10];
//
//	gets(str);
//
//	int i, j, k = 0, m = 0;
//	char swap;
//	int size = strlen(str);
//
//	//90> 100 답 벡터 하나의 값이 공백없이 1-2*4/2 이런식으로 계산을 했을 때여서, 입력 예시랑 다름.
//	//하여, 문자를 옮겨서 입력 예시를 맞춰줌
//	for (i = 0; i < strlen(str); i++) {
//		if (str[i] >= '0' && str[i] <= '9' && (str[i + 1] == '+' || str[i + 1] == '-' || str[i + 1] == '/')) {
//			for (j = strlen(str); j > i + 1; j--) {
//				str[j] = str[j - 1];
//			}
//			str[j] = ' ';
//		}
//		if ((str[i] == '+' || str[i] == '/' || str[i] == '-') && str[i + 1] >= '0' && str[i + 1] <= '9') {
//			for (j = strlen(str); j > i + 1; j--) {
//				str[j] = str[j - 1];
//			}
//			str[j] = ' ';
//		}
//	}
//
//	j = 0;
//	char op[9] = { 0 };
//	for (i = 0; i < strlen(str) + 1; i++) {
//		//다음 연산자를 연산자 배열에 넣음
//		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
//			op[j++] = str[i];
//		}
//
//		//4-2
//		if (str[i] >= '0' && str[i] <= '9' || str[i] == '-') {
//			temp[k++] = str[i];
//		}
//		else {
//			//k에 - 만 있을시
//			if (temp[0] == '-' && k == 1) {
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
//	// * / 연달아 나오는 것은 2 * 3 * 4 예씨로
//	// 연산자배열은 *,* 숫자배열은 2,3,4 로 앞의 연산을 뒤로 넘기면 계산할 수 있다.
//	// 2 3 4 >> 0 6 4 >> 0 0 24  이후 전체를 sum 
//	for (i = 0; i < j; i++) {
//		if (op[i] == '*')
//		{
//			num[i + 1] = num[i] * num[i + 1];
//			num[i] = 0;
//		}
//		else if (op[i] == '/') {
//
//			num[i + 1] = num[i] / num[i + 1];
//			num[i] = 0;
//		}
//	}
//
//	double sum = 0;
//	for (i = 0; i < m; i++) {
//		sum += num[i];
//	}
//
//	printf("%lf", sum);
//}
//
//
/////*
////123 + 2*3 - 4 / 2
////4/2*3 + 10
////*/