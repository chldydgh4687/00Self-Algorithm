////�׸��� �˰��� ����
////https://www.acmicpc.net/problem/5585
//
///*
//500, 100, 50, 10, 5, 1 ���� �ְ�, �Ž����� ������ ���� �۰� �ܵ��� �ش�. 
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int num;
//	scanf("%d", &num);
//
//	int r;
//	r = 1000 - num;
//	
//	int i;
//	int m_size = 500;
//	int coin_sum = 0;
//
//	for (i = 0; i < 6; i++) {
//		if (i % 2 == 0) {
//			coin_sum += (r / m_size);
//			r -= m_size*(r / m_size);
//			m_size /= 5;
//		}
//		else if (i % 2 != 0) {
//			coin_sum += (r / m_size);
//			r -= m_size*(r / m_size);
//			m_size /= 2;
//		}
//	}
//
//	printf("%d", coin_sum);
//}
//
///*
//380
//
////1000 - 380 = 620(500 100 10 10) = 4
//
//4
//*/