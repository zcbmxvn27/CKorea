#include <stdio.h>

void main6() {
	// for를 사용해서 1~10까지 출력
	//1~10까지의 합
	int 합계 = 0;
	for (int i = 0; i < 10; i++)
	{
		합계 += (i + 1);
		printf("%d\n", 합계);
	}

	printf("%d\n", 합계);

	int b = 0;
	int sum = 0;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &b);
	for (int a = 1; a <= b; a++) {
		sum = sum + a;
	}
	printf("총합은 %d입니다\n", sum);
}