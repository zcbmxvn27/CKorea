#include <stdio.h>

void main5() {
	// while, for 반복문 비교

	int flag = 0;
	while (flag < 5) {
		printf("flag : %d \n", flag);
		flag++;
	}

	for (int i = 0; i < 5; i++) {
		printf("i : %d \n", i);
	}

	// for(초기값; 조건; 증감){반복수행할 내용; }

	for (int i = 0; i < 5; i++)
	{
		printf("신희재 %d\n", i);
	}
}