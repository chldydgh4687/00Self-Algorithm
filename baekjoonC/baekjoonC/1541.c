// - �ڸ� ��� - ȭ ��Ű��

//��ư� ǰ..
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main() {
//
//	char temp[50];
//	char num[6] = {0};
//	
//	gets(temp);
//	char *p = (char*)malloc(strlen(temp)+1);
//	strcpy(p, temp);
//
//	int i,k =0;
//	int plus = 0, minus = 0, m_key = 0;
//	for (i = 0; i < strlen(p)+1; i++) {
//		if (p[i] >= '0' && p[i] <= '9') {
//			num[k++] = p[i];
//		}
//		else {
//			if ( m_key == 0) {
//				if (p[i] == '-') {
//					m_key = 1;
//				}
//				/*printf("p : %d\n", atoi(num));*/
//				plus += atoi(num);
//			}
//			else if (p[i] == '-' || m_key == 1 )
//			{
//				/*printf("m : %d\n", atoi(num));*/
//				m_key = 1;
//				minus += atoi(num);
//
//			}
//			k = 0;
//		}
//	}
//
//	printf("%d\n", plus - minus);
//	free(p);
//}

//���� scanf �޴� ���� ����ϱ� 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num,sum = 0,m_key = 0;
	char ch;

	while (1) {
		scanf("%d%c", &num, &ch);
		
		if (m_key == 0) sum += num;
		else sum -= num;

		if (ch == '-') m_key = 1;
		
		if (ch == '\n') break;
	}

	printf("%d", sum);
}

/*
Ǯ�� : �ٽ� �˰����� - �� ���۵Ǹ� ���� ���� +, - �� ������ ��� ���ָ�ȴ�.
*/