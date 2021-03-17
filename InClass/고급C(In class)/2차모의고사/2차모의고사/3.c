//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//#define _CRT_DBG_MAP_ALLOC
//#include <crtdbg.h>
//
//int main() {
//	int n; char word[101],temp[101]; scanf("%d %s", &n, word);
//	char **target = (char**)malloc(n * sizeof(char*));
//	getchar();
//	for (int i = 0; i < n; i++) {
//		gets(temp);
//		target[i] = (char*)malloc(strlen(temp) * sizeof(char));
//		strcpy(target[i], temp);
//	}
//
//	int count = 0, same = 0, pos = 0;
//	int max = 0, max_i = -1;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j <= strlen(target[i]); j++) {
//			for (int k = j; k < j + strlen(word); k++) {
//				if (target[i][k] == word[pos++]) {
//					count++;
//				}
//				else {
//					break;
//				}
//			}
//			if (count == strlen(word)) {
//				same++;
//				j += strlen(word) - 1;
//			}
//			pos = count = 0;
//		}
//		if (max < same) {
//			max = same;
//			max_i = i;
//		}
//		same = 0;
//	}
//
//	if (max_i == -1) {
//		printf("NONE\n");
//	}
//	else {
//		puts(target[max_i]);
//	}
//	free(target);
//	return 0;
//}