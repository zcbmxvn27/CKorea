#include <stdio.h>

// Plus : ���� 2�� ���ϱ�
int Plus(int n1, int n2) {
	int result = n1 + n2;
	return result;
}

// Minus : ���� 2�� ����
int Minus(int n1, int n2) {
	int result = n1 - n2;
	return result;
}

// Mul : ���� 2�� ���ϱ�
int Mul(int n1, int n2) {
	int result = n1 * n2;
	return result;
}

// Div : ���� 2�� ������
float Div(int n1, int n2) {
	float result = n1 / n2;
	return result;
}

int main2() {
	int plus_result = Plus(1, 1);
	int minus_result = Minus(1, 1);
	int mul_result = Mul(3, 3);
	float div_result = Div(10, 2);

	// �Լ� ���

	// 

	printf("%d \n", plus_result);
	printf("%d \n", minus_result);
	printf("%d \n", mul_result);
	printf("%.2f \n", div_result);

	return 0;
}