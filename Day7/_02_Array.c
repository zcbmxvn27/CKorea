#include <stdio.h>
#define SUBWAY_LENGTH

int main2() {
	int subway[4] = {0, 0, 0, 0 };

	// 1번칸에 3명 추가
	subway[0] = 3;

	// 2번칸에 2명 추가
	subway[1] = 2;

	// 3번칸에 1명 추가
	subway[2] = 1;

	// 4번칸에 2명 추가
	subway[3] = 2;
	
	// 3번칸에 3명이 추가로 탑승
	//int subway3 = 1;
	//subway3 += 3
	subway[2] += 3;			// {3,2,4,2}
	int sum = 0;

	//각 칸의 인원과 전체 인원을 계산
	for (int i = 0; i < 4; i++)			// 0, 1, 2, 3 < 4번을 반복
	{
		printf("%d번째 칸에는 %d명\n",i+1, subway[i]);
		sum += subway[i];
	}

	printf("총인원은 %d명 \n", sum);

	return 0;
}