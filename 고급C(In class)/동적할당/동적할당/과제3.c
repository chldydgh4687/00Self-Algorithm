//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//struct student {
//	char *studentName;
//	char id[5];
//	char *subjectName;
//	double subjectScore;
//};
//
//typedef struct student STUDENT;
//
//int main() {
//
//	int N;
//	scanf("%d", &N);
//	char temp[100] = { 0 };
//
//	STUDENT *p = (STUDENT*)malloc(N * sizeof(STUDENT));
//	//org 복사
//	STUDENT *org = (STUDENT*)malloc(N * sizeof(STUDENT));
//	STUDENT *q, *x;
//	getchar();
//	for (q = p, x = org; q < p + N; q++, x++) {
//		scanf("%s %s", temp, q->id);
//		strcpy(x->id, q->id);
//		q->studentName = (char*)malloc(strlen(temp) + 1);
//		x->studentName = (char*)malloc(strlen(temp) + 1);
//		strcpy(q->studentName, temp);
//		strcpy(x->studentName, temp);
//
//		scanf(" %s %lf", temp, &x->subjectScore);
//		q->subjectScore = x->subjectScore;
//		x->subjectName = (char*)malloc(strlen(temp) + 1);
//		q->subjectName = (char*)malloc(strlen(temp) + 1);
//		strcpy(q->subjectName, temp);
//		strcpy(x->subjectName, temp);
//	}
//
//	STUDENT *r, swap;
//	for (q = p; q < p + N; q++) {
//		for (r = q + 1; r < p + N; r++) {
//			if (q->subjectScore < r->subjectScore) {
//				swap = *q;
//				*q = *r;
//				*r = swap;
//			}
//		}
//	}
//
//
//	int O;
//	scanf("%d", &O);
//	// 중복의 위치
//	int i, cnt = 0, st_pos, en_pos;
//	for (i = 0; i < N; i++) {
//		if (p[O].subjectScore == p[i].subjectScore) {
//			if (cnt == 0) {
//				st_pos = i;
//			}
//			cnt++;
//		}
//	}
//	en_pos = st_pos + cnt;
//
//	cnt = 0;
//	//중복의 위치에 해당하는 입력값이 들어올 때
//	if (st_pos <= (O - 1) && (O - 1) < en_pos) {
//		for (i = 0; i < N; i++) {
//			if (org[i].subjectScore == p[st_pos].subjectScore)
//			{
//				++cnt;
//				if (cnt == O - (st_pos)) {
//					break;
//				}
//			}
//		}
//		printf("%s %s %s %.2lf\n", org[i].studentName, org[i].id, org[i].subjectName, org[i].subjectScore);
//	}// 아니라면 해당하는 값을 실행
//	else {
//		printf("%s %s %s %.2lf\n", p[O - 1].studentName, p[O - 1].id, p[O - 1].subjectName, p[O - 1].subjectScore);
//	}
//	//해제
//	for (q = p; q < p + N; q++) {
//		free(q->studentName);
//		free(q->subjectName);
//	}
//	free(p);
//}

/*
5
hong 1003 math 78
jeon 1001 eng 80
heung 1002 eco 80
bol 1004 ethics 50
euler 1005 math 100
*/

//////3-2
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//struct subject {
//	char *name;
//	double score;
//};
//
//struct student {
//	char *name;
//	char id[5];
//	int numSubject;
//	struct subject *psub;
//	double avg;
//};
//
//typedef struct student STUDENT;
//typedef struct subject SUB;
//int main() {
//	int N;
//	scanf("%d", &N);
//
//	STUDENT *s = (STUDENT*)malloc(N * sizeof(STUDENT));
//	SUB *save;
//	int i, size = 1, k = 0, j;
//	char temp[100] = { 0 };
//	double sum = 0;
//
//	getchar();
//	for (i = 0; i < N; i++) {
//
//		scanf("%s %s", temp, s[i].id);
//		s[i].name = (char*)malloc(strlen(temp) + 1);
//		strcpy(s[i].name, temp);
//
//		//1개 과목 생성
//		s[i].psub = (SUB*)malloc(size * sizeof(SUB));
//		while (1) {
//			scanf("%s%lf", temp, &s[i].psub[k].score);
//			s[i].psub[k].name = (char*)malloc(strlen(temp) + 1);
//			strcpy(s[i].psub[k].name, temp);
//
//			//엔터값이 나오면 break;
//			if (getchar() == '\n') {
//				break;
//			}
//			//아니면 한칸더의 과목 구조체 생성
//			++size;
//			save = (SUB*)malloc(size * sizeof(SUB));
//			// 이전 psub 구조체에서 save로의 복사
//			for (j = 0; j < size; j++) {
//				save[j] = s[i].psub[j];
//			}
//			// 주소값을 교체
//			s[i].psub = save;
//			k++;
//		}
//
//		for (j = 0; j < size; j++) {
//			sum += s[i].psub[j].score;
//		}
//		s[i].avg = sum / (double)size;
//
//		k = sum = 0;
//		size = 1;
//	}
//
//	//평균 점수가 같으면 학번 순으로 정렬
//	STUDENT swap;
//	for (i = 0; i < N; i++) {
//		for (j = i + 1; j < N; j++) {
//			if (s[i].avg == s[j].avg && atoi(s[i].id) > atoi(s[j].id)) {
//				swap = s[i];
//				s[i] = s[j];
//				s[j] = swap;
//			}
//			if (s[i].avg < s[j].avg) {
//				swap = s[i];
//				s[i] = s[j];
//				s[j] = swap;
//			}
//		}
//	}
//
//	int K;
//	double max = -1;
//	SUB *pos;
//	scanf("%d", &K);
//
//	for (i = 0; i < 4; i++) {
//		if (max < s[K - 1].psub[i].score) {
//			max = s[K - 1].psub[i].score;
//			pos = &s[K - 1].psub[i];
//		}
//	}
//	
//	printf("%s %s %.2lf %s %.2lf", s[K - 1].name, s[K - 1].id, s[K - 1].avg, pos->name, pos->score);
//}