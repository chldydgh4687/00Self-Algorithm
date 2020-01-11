//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char str[100] = { 0 };
//	char num[3] = { 0 };
//	int n;
//	gets(str);
//	scanf("%d", &n);
//
//	int i, j, k;
//	for (i = 0; i < strlen(str); i++) {
//		if (str[i] >= 'A' && str[i] <= 'Z') {
//			str[i] += n;
//		}
//		else if (str[i] >= 'a' && str[i] <= 'z') {
//			str[i] -= n;
//		}
//		else if (str[i] >= '0' && str[i] <= '9') {
//			//첫째자리 1혹은 2이면
//			if (str[i] == '1' || str[i] == '2') {
//				if (str[i + 1] >= '0' && str[i + 1] <= '7') {
//					num[0] = str[i];
//					//둘째 자릿 수 
//					num[1] = str[i + 1];
//					// atoi 통해서 알파벳
//					str[i] = 'A' + atoi(num) - 1;
//					// 두자리를 하나의 알파벳으로 바꿔서 하나씩 댕김
//					str[i + 1] = str[i];
//					i++;
//					if (n > 2) {
//						for (j = 0; j < n - 2; j++) {
//							for (k = strlen(str); k > i; k--) {
//								str[k] = str[k - 1];
//							}
//							i++;
//						}
//					}
//					continue;
//				}
//			}
//			//한자릿 수 일 경우
//			num[0] = str[i];
//			str[i] = atoi(num) + 'A' - 1;
//
//			// 횟수 n만큼
//
//			for (j = 0; j < n - 1; j++) {
//				for (k = strlen(str); k > i; k--) {
//					str[k] = str[k - 1];
//				}
//				i++;
//			}
//
//		}
//		else {
//			str[i] = ' ';
//		}
//	}
//	printf("%s\n", str);
//}
//3
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char str[100] = {0};
//	gets(str);
//
//	int N;
//	scanf("%d", &N);
//
//	char num[3];
//	int i,j,k;
//	int size = strlen(str);
//
//	for (i = 0; i < strlen(str); i++) {
//		//대문자
//		if (str[i] >= 'A' && str[i] <= 'Z') {
//			str[i] += N;
//		}//소문자
//		else if (str[i] >= 'a' && str[i] <= 'z') {
//			str[i] -= N;
//		}//숫자
//		else if (str[i] >= '0' && str[i] <= '9') {
//			num[0] = str[i];
//			//두자리일때
//			if (str[i] == '1' || str[i] == '2') {
//				//뒷자리도 숫자일때
//				if (str[i + 1] >= '0' && str[i + 1] <= '9') {
//					//num에 일의자리를 추가
//					num[1] = str[i + 1];
//					//알파벳으로 바꾸는 가정하에 한자리숫자일 때처럼 문자열을 당김
//					for (j = i + 2; j <= strlen(str); j++) {
//						str[j - 1] = str[j];
//					}
//				}
//			}
//			//앞파벳 변환
//			str[i] = 'A' + atoi(num) - 1;
//			//횟수만큼 늘려줌
//			for (j = 0; j < N - 1; j++) {
//				for (k = strlen(str); k > i; k--) {
//					str[k] = str[k - 1];
//				}
//				i++;
//			}
//		}//다른 기호일경우 공백
//		else {
//			str[i] = ' ';
//		}
//	}
//	//출력
//	printf("%s\n", str);
//}
//
///*
//CLikp5tGLE?Qej15J
//2
//*/

//코드깔끔하게하기