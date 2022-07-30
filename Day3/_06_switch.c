#include <stdio.h>

void main6() {
	// if : 범위
	// switch : 일치하는 지
	
	// 턴제 게임
	//1.공격 2.방어 3.아이템 4.도망
	printf("무엇을 선택할 것인가요?");
	int choice;
	scanf("%d", &choice);

	switch (choice) {			// ()안에는 비교 기준
	case 1:
		printf("공격을 했다\n");
		break;
	case 2:
		printf("방어를 했다\n");
		break;
	case 3:
		printf("아이템을 사용했다\n");
		break;
	case 4:
		printf("도망을 쳤다\n");
		break;
	default:
		printf("다시 선택해주세요");
	}
}

// 조건문 : if~else if~else, switch~case~break