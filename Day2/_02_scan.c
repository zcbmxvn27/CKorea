#include <stdio.h>

void main2() {
	int 숫자;			//%d
	char 문자;			//%c
	char 문자열[100];	//%s
	float 실수;			//%f

	//입력
	printf("문자를 입력해주세요 \n");
	printf("내가 입력할 문자 : ");
	scanf("%s", &문자열);
	printf("숫자를 입력해주세요 \n");
	printf("내가 입력할 숫자 : ");
	scanf("%d", &숫자);
	printf("실수를 입력해주세요 \n");
	printf("내가 입력할 실수 : ");
	scanf("%f", &실수);
	printf("당신이 입력한 문자는 '%s'\n'", 문자열);
	printf("당신이 입력한 숫자는 '%d'\n", 숫자);
	printf("당신이 입력한 실수는 '%f'\n", 실수);
}