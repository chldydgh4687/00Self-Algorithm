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
//	//동적 할당 성공 여부 표시
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
//	// 도시 입력
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
//	// 각 도시의 관광지 수를 배열에 저장
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
//	//city_num 에 따라 s[i] 에 동적할당을 하고, 각 값들을 저장
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
//	//가장 높은 값을 지정하고 같은 경우 날짜가 더 빠른 것을 타겟으로 지정.
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
//	//타겟과 해당 도시에 있는 관광지와 정보가 같을 경우 배열인덱스를 i로 남김
//	int key = 0;
//	for (i = 0; i < N; i++) {
//		for (j = 0; j < city_num[i]; j++) {
//			/*
//			도시 관광지가 같은 도시에 있는 경우 조건 하나 더 추가 90 >> 100
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
//	//남긴 i로 도시를 출력, 나머지는 타겟의 값들을 출력
//	printf("%s %s %d %s %c\n", cityname[i], target.tour_city, target.fee, target.day, target.ch);
//
//
//	//동적할당 해제
//	for (i = 0; i < N; i++) {
//		free(cityname[i]);
//		free(s[i]);
//	}
//	free(city_num);
//	free(cityname);
//	free(s);
//}