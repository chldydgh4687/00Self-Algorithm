//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char str[101] = { 0 };
//	char in[101] = { 0 };
//	gets(str);
//	gets(in);
//
//	int i,j,k=0;
//	int cnt = 0;
//	int same = 0;
//
//	for (i = 0; i < strlen(str); i++) {
//		for (j = i; j < i + strlen(in); j++) {
//			//in배열에서 순으로 pen 에 해당하는값이 같으면 차례대로 cnt++;
//			if (str[j] == in[k++]) {
//				++cnt;
//			}
//			else {
//				// ex) pen이 아닌 pan 경우 p에서 cnt가 증가하고 a에서 다르면 더해볼필요가 없으므로 break;
//				break;
//			}
//		}
//		//위의 결과로 cnt의 값이 in에 해당하는 pen 3글자와 같을시 문자열이 같다고 판단하여 ++same;
//		if (cnt == strlen(in)) {
//			++same;
//			//해당 문자열이 같아지면 그 pen 에서 p 다음 e에서는 해볼필요가 없으므로 단어 수만큼 i를 이동
//			i = i + strlen(in) - 1;
//		}
//		// 카운트와 in 배열의 처음으로 다시 초기화
//		k = cnt = 0;
//	}
//
//	printf("%d", same);
//
//}
//
///*
//I have a pen. I have an applepen. PPAP.
//pen
//*/



////3-2
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char str[101] = { 0 };
//	char in[101] = { 0 };
//	gets(str);
//	gets(in);
//
//	int i,j,k=0;
//	int cnt = 0;
//	int same = 0;
//
//	for (i = 0; i < strlen(str); i++) {
//		for (j = i; j < i + strlen(in); j++) {
//
//			if (str[j] == in[k++]) {
//				// 3-1 와 같은 방식이나 밑의 if 조건이 달린다. 
//				// 문자열이 같은 위치가 처음이 아닐경우
//				if (j != 0) {
//					//ex)pen : j가 p에 해당할 때와 n일 때
//					if (j != 0) {
//						if (j == i) {
//							//위 조건식에 ! $ 다른 부호에 안되는 조건을 수정.
//							if ((str[j - 1] >= 'a'  && str[j - 1] <= 'z') || (str[j - 1] >= 'A'  && str[j - 1] <= 'Z')) {
//								break;
//							}
//						}
//						if (j == i + strlen(in) - 1) {
//							//위 조건식에 ! $ 다른 부호에 안되는 조건을 수정.
//							if ((str[i + strlen(in)] >= 'a'  && str[i + strlen(in)] <= 'z') || (str[i + strlen(in)] >= 'A'  && str[i + strlen(in)] <= 'Z')) {
//								break;
//							}
//						}
//					}
//				}
//				//위의 조건에 해당안되면 cnt
//				++cnt;
//			}
//			else {
//				break;
//			}
//		}
//		if (cnt == strlen(in)) {
//			++same;
//			i = i + strlen(in) - 1;
//		}
//		k = cnt = 0;
//	}
//
//	printf("%d", same);
//
//}