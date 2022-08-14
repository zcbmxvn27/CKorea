#include <stdio.h>

// C언어 : 구조체-함수-포인터

typedef struct 캐릭터 {
	char* 이름;
	int 체력;
	int 공격력;

} 캐릭;

void ShowInfo(캐릭 c1, 캐릭 c2) {
	printf("이름 : %s, 체력 : %d, 공격력 : %d \n", c1.이름, c1.체력, c1.공격력);
	printf("이름 : %s, 체력 : %d, 공격력 : %d \n", c2.이름, c2.체력, c2.공격력);
}

void Fighting(캐릭* c1, 캐릭* c2) {
	while (1) {
		// 상태
		ShowInfo(*c1, *c2);

		// 공격
		(*c2).체력 -= (*c1).공격력;
		(*c1).체력 -= (*c2).공격력;

		// 체크
		if ((*c1).체력 <= 0) {
			printf("%s 사망ㅠㅠ\n", c1->이름);
		}
		if ((*c2).체력 <= 0) {
			printf("%s 사망ㅠㅠ\n", c2->이름);
			break;
		}
	}
}

int main4() {
	캐릭 마린 = { "마린", 40, 6 };
	캐릭 저글링 = { "저글링", 35, 5 };
	캐릭 질럿 = { "질럿", 40, 6 };

	// 싸움
	Fighting(&마린, &저글링);

	// 최종상태
	ShowInfo(마린, 저글링);

	return 0;
}