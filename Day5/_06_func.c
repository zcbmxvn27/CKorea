#include <stdio.h>

// Sum
void Sum(int a, int b) {
	int result1 = a + b;
	printf("%d", result1);
}
// Sub
void Sub(int a, int b) {
int result2 = a - b;
printf("%d", result2);
}
// Mul
void Mul(int a, int b) {
	int result3 = a * b;
	printf("%d", result3);
}
// Div
void Div (int a, int b) {
	int result4 = a / b;
	printf("%d", result4);
}

// 숫자 2개를 받아서 각각 절댓값으로 만들어 더하기
void A(int a, int b) {
	if (a < 0) {
		a = a * -1;
	}
	if (b < 0) {
		b = b * -1;
	}
	int result = a + b;
		printf("%d", result);
}
// 숫자 2개를 받아서 각각 절댓값으로 만들어 빼기
void B(int a, int b) {
	if (a < 0) {
		a = a * -1;
	}
	if (b < 0) {
		b = b * -1;
	}
	int result = a - b;
	printf("%d", result);
}


//c언어의 시작점은 main()함수이다
int main() {
	Sum(2, 2);
	printf("\n");
	Sub(2, 2);
	printf("\n");
	Mul(2, 2);
	printf("\n");
	Div(2, 2);
	printf("\n");
	A(-3, 2);
	printf("\n");
	B(-5, -1);
	return 0;
}