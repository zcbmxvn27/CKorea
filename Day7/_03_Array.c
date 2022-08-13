#include <stdio.h>

int main3() {
	int 가격[5] = { 1000, 1500, 2000, 2500, 3000 };
	int sum = 0;
	//for문으로 전부 출력
	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 : %d원\n",i+1, 가격[i]);
		sum += 가격[i];
	}
	printf("총합 : %d원", sum);

	return 0;
}