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
//			//in�迭���� ������ pen �� �ش��ϴ°��� ������ ���ʴ�� cnt++;
//			if (str[j] == in[k++]) {
//				++cnt;
//			}
//			else {
//				// ex) pen�� �ƴ� pan ��� p���� cnt�� �����ϰ� a���� �ٸ��� ���غ��ʿ䰡 �����Ƿ� break;
//				break;
//			}
//		}
//		//���� ����� cnt�� ���� in�� �ش��ϴ� pen 3���ڿ� ������ ���ڿ��� ���ٰ� �Ǵ��Ͽ� ++same;
//		if (cnt == strlen(in)) {
//			++same;
//			//�ش� ���ڿ��� �������� �� pen ���� p ���� e������ �غ��ʿ䰡 �����Ƿ� �ܾ� ����ŭ i�� �̵�
//			i = i + strlen(in) - 1;
//		}
//		// ī��Ʈ�� in �迭�� ó������ �ٽ� �ʱ�ȭ
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
//				// 3-1 �� ���� ����̳� ���� if ������ �޸���. 
//				// ���ڿ��� ���� ��ġ�� ó���� �ƴҰ��
//				if (j != 0) {
//					//ex)pen : j�� p�� �ش��� ���� n�� ��
//					if (j != 0) {
//						if (j == i) {
//							//�� ���ǽĿ� ! $ �ٸ� ��ȣ�� �ȵǴ� ������ ����.
//							if ((str[j - 1] >= 'a'  && str[j - 1] <= 'z') || (str[j - 1] >= 'A'  && str[j - 1] <= 'Z')) {
//								break;
//							}
//						}
//						if (j == i + strlen(in) - 1) {
//							//�� ���ǽĿ� ! $ �ٸ� ��ȣ�� �ȵǴ� ������ ����.
//							if ((str[i + strlen(in)] >= 'a'  && str[i + strlen(in)] <= 'z') || (str[i + strlen(in)] >= 'A'  && str[i + strlen(in)] <= 'Z')) {
//								break;
//							}
//						}
//					}
//				}
//				//���� ���ǿ� �ش�ȵǸ� cnt
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