#include <stdio.h>

void main() {
	int num1 = 0, score1 = 0;
	int num2 = 0, score2 = 0;
	int num3 = 0, score3 = 0;
	int num4 = 0, score4 = 0;
	int name2 = 0, result = 0;
	char name1[50];
	// 학습지 사칙연산
	//이름을 입력하세요 (출력)
	//이름 (입력)
	printf("이름을 입력하세요 : ");
	scanf("%s", &name1);
	printf("학번을 입력하세요 : ");
	scanf("%d", &name2);
	printf("-------------------------------------------------------------------------------------------------------\n");
	printf("시험을 시작합니다 \n");
	printf("\n");
	//1 + 1
	printf("1 + 1 = ");
	scanf("%d", &num1);
	(num1 == 2) ? printf("정답입니다.\n") : printf("오답입니다.\n");
	(num1 == 2) ? score1 = 1 : score1 = 0;
	// 2 - 1
	printf("2 - 1 = ");
	scanf("%d", &num2);
	(num2 == 1) ? printf("정답입니다.\n") : printf("오답입니다.\n");
	(num2 == 1) ? score2 = 1 : score2 = 0;
	// 3*3
	printf("3 × 3 = ");
	scanf("%d", &num3);
	(num3 == 9) ? printf("정답입니다.\n") : printf("오답입니다.\n");
	(num3 == 9) ? score3 = 1 : score3 = 0;
	//10/2
	printf("10 ÷ 2 = ");
	scanf("%d", &num4);
	(num4 == 5) ? printf("정답입니다.\n") : printf("오답입니다.\n");
	(num4 == 5) ? score4 = 1 : score4 = 0;

	printf("-------------------------------------------------------------------------------------------------------\n");
	printf("이름:%s | 학번:%d \n", name1, name2);
	printf("1 + 1 = %d \n", num1);
	printf("2 - 1 = %d \n", num2);
	printf("3 × 3 = %d \n", num3);
	printf("10 ÷ 2 = %d \n", num4);
	printf("\n");
	printf("수고하셨습니다! \n");

	// +, -, *, /
	// 대입 =
	// % 나머지 구하기

}