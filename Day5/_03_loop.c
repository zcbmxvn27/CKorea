#include <stdio.h>

void main3() {
	// break : 반복문 즉시 종료
	// continue : 반복문 처음으로 (1회성 취소)

	// for(초기값:조건;증감){}
	for (int i = 1; i < 11; i++)
	{
		printf("%d \n", i);
	}

	for (int i = 1; i < 11; i++)
	{
		if (i % 2 == 1) {
			continue;
		}
		printf("%d \n", i);
	}

	int flag = 1;
	while (flag < 11) {
		printf("%d\n", flag);
		flag++;
	}
}