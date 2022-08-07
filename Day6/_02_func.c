#include <stdio.h>

// Plus : 숫자 2개 더하기
int Plus(int n1, int n2) {
	int result = n1 + n2;
	return result;
}

// Minus : 숫자 2개 빼기
int Minus(int n1, int n2) {
	int result = n1 - n2;
	return result;
}

// Mul : 숫자 2개 곱하기
int Mul(int n1, int n2) {
	int result = n1 * n2;
	return result;
}

// Div : 숫자 2개 나누기
float Div(int n1, int n2) {
	float result = n1 / n2;
	return result;
}

int main2() {
	int plus_result = Plus(1, 1);
	int minus_result = Minus(1, 1);
	int mul_result = Mul(3, 3);
	float div_result = Div(10, 2);

	// 함수 사용

	// 

	printf("%d \n", plus_result);
	printf("%d \n", minus_result);
	printf("%d \n", mul_result);
	printf("%.2f \n", div_result);

	return 0;
}