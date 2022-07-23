#include <stdio.h>

void main8() {
	// 1+1
	int result1 = 1 + 1;
	printf("3 + 5 = %d\n", result1);
	// 2-1
	int result2 = 2 - 1;
	printf("2 - 1 = %d\n", result2);
	// 3*3
	int result3 = 3 * 3;
	printf("3 * 3 = %d\n", result3);
	// 10/2
	int result4 = 10 / 2;
	printf("10 / 2 = %d\n", result4);
	// 10.0/3.0
	float result5 = 10.0 / 3.0;
	printf("10.0 / 3.0 = %f\n", result5);			//%와 f 사이에 [.(숫자)]를 넣으면 자신이 원하는 소수점 갯수만큼 나옴

	// % : 나머지 구하기
	int result9 = 10 % 3;					// == 1
	printf("10을 3으로 나눈 나머지는 %d이다\n",result9);
	
	// 배수를 구할때, 홀짝을 구할때
	//3의 배수 == 3으로 나누 나머지가 0

	int num = 3;
	printf("num이 홀수이면 1, 짝수면 0 : %d\n",num % 2);
}