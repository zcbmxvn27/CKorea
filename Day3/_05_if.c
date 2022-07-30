#include <stdio.h>

void main5() {
	// 학점 계산
	//점수 : 90이상이면 A, 80이상이면 B, 70이상이면 C, 70미만이면 D
	char grade;			// 등급
	int score = 0;		// 점수

	// 점수를 입력받고

	// 점수에 따라서 등급을 알려주세요
	

	printf("점수를 입력하세요 : ");		//85점, B등급
	scanf("%d", &score);
	if (score >= 90) {
		grade = 'A';
	}
	else if (score >= 80) {
		grade = 'B';
	}
	else if (score >= 70) {
		grade = 'C';
	}
	else {
		grade = 'D';
	}
	printf("%d점, %c등급\n", score, grade);
}