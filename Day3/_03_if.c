#include <stdio.h>

void main3() {
	// 버스카드를 찍습니다 .
	// 나이를 입력받아서
	// 14세 미만이면 어린이 입니다. 요금은 500원입니다
	// 14~19 청소년 입니다. 요금은 750원 입니다.
	// 20세 이상이면 성인 입니다. 요금은 1000원 입니다.
	
	//나이와 금액은 변수를 활용

	int age = 0, 요금 = 0;
		printf("나이를 입력해주세요 : ");
		scanf("%d", &age);
		if (age < 14) {
			요금 = 500;
			printf("어린이 입니다. 요금은 %d원 입니다", 요금);
		}
		else if (age < 20) {		// 위 조건이 틀리고 20세 미만일 경우
			요금 = 750;
			printf("청소년 입니다. 요금은 %d원 입니다.", 요금);
		}
		else {		// 그밖에 나머지일 경우
			요금 = 1000;
			printf("성인 입니다. 요금은 %d원 입니다.", 요금);
		}
}