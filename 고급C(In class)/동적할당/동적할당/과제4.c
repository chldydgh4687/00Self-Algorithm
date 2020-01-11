//#define _CRT_SECURE_NO_WARNINGS
//#include <string.h>
//#include <stdio.h>
//
//typedef struct tourcity {
//	char tour_city[21];
//	int fee;
//	char ch;
//	char day[9];
//}tour;
//
//int main()
//{
//	int N;
//	scanf("%d", &N);
//
//	tour **s = (tour**)malloc(N * sizeof(tour*));
//	//���� �Ҵ� ���� ���� ǥ��
//	if (s == NULL) {
//		printf("Not enough memory!");
//		return 0;
//	}
//
//
//	char **cityname = (char**)malloc(N * sizeof(char*));
//	if (cityname == NULL) {
//		printf("Not enough memory!");
//		return 0;
//	}
//
//	char temp[100] = { 0 };
//	char t1[5] = { 0 };
//	char t2[5] = { 0 };
//	int i;
//
//	// ���� �Է�
//	getchar();
//	for (i = 0; i < N; i++)
//	{
//		scanf("%s", temp);
//		cityname[i] = (char*)malloc(strlen(temp) + 1);
//		if (cityname[i] == NULL) {
//			printf("Not enough memory!");
//			return 0;
//		}
//		strcpy(cityname[i], temp);
//	}
//
//	// �� ������ ������ ���� �迭�� ����
//	int *city_num = (int *)malloc(N * sizeof(int));
//	if (city_num == NULL) {
//		printf("Not enough memory!");
//		return 0;
//	}
//
//	getchar();
//	for (i = 0; i < N; i++) {
//		scanf("%d", &city_num[i]);
//	}
//
//	int j;
//	//city_num �� ���� s[i] �� �����Ҵ��� �ϰ�, �� ������ ����
//	for (i = 0; i < N; i++) {
//		s[i] = (tour*)malloc(city_num[i] * sizeof(tour));
//		if (s[i] == NULL) {
//			printf("Not enough memory!");
//			return 0;
//		}
//
//		for (j = 0; j < city_num[i]; j++) {
//			scanf("%s %d %c %s", s[i][j].tour_city, &s[i][j].fee, &s[i][j].ch, s[i][j].day);
//		}
//	}
//
//	int max = -1, k;
//	//���� ���� ���� �����ϰ� ���� ��� ��¥�� �� ���� ���� Ÿ������ ����.
//	tour target;
//	for (i = 0; i < N; i++) {
//		for (j = 0; j < city_num[i]; j++) {
//			if (max < s[i][j].fee) {
//				max = s[i][j].fee;
//				target = s[i][j];
//			}
//			else if (max == s[i][j].fee) {
//				for (k = 0; k < 5; k++) {
//					t1[k] = s[i][j].day[k];
//					t2[k] = target.day[k];
//				}
//				if (atoi(t1) < atoi(t2)) {
//					max = s[i][j].fee;
//					target = s[i][j];
//				}
//			}
//		}
//	}
//
//	//Ÿ�ٰ� �ش� ���ÿ� �ִ� �������� ������ ���� ��� �迭�ε����� i�� ����
//	int key = 0;
//	for (i = 0; i < N; i++) {
//		for (j = 0; j < city_num[i]; j++) {
//			/*
//			���� �������� ���� ���ÿ� �ִ� ��� ���� �ϳ� �� �߰� 90 >> 100
//			*/
//			if (strcmp(target.tour_city, s[i][j].tour_city) == 0 && target.fee == s[i][j].fee) {
//				key = 1;
//				break;
//			}
//		}
//		if (key == 1) {
//			break;
//		}
//	}
//
//	//���� i�� ���ø� ���, �������� Ÿ���� ������ ���
//	printf("%s %s %d %s %c\n", cityname[i], target.tour_city, target.fee, target.day, target.ch);
//
//
//	//�����Ҵ� ����
//	for (i = 0; i < N; i++) {
//		free(cityname[i]);
//		free(s[i]);
//	}
//	free(city_num);
//	free(cityname);
//	free(s);
//}