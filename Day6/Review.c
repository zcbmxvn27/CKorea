#include <stdio.h>

// �Լ� : �����ڰ� ���� ����� ���
// ������ : ���α׷��� �� �������ִ� ��� (+, -, ==, >=)

// �Լ�
// �ڷ��� �Լ���(){}

// ���޹��� ���� ���� �������� ���� ���ϴ� ���
void AbsPlus(int num1, int num2) {			// ���� 2���� ���޹޴� �Լ�
	int num3 = 0, num4 = 0, result = 0;		// AbsPlus �ȿ��� ���� ������ AbsPlus�� ������ ������ (��������)
	if (num1 < 0) {
		num3 = num1 * -1;			// num1�� ������ ����� �ٲ� num3�� �ִ´�.
	}
	else {
		num3 = num1;				// num1�� ����� �״�� num3�� �ִ´�.
	}
	if (num2 < 0) {
		num4 = num2 * -1;			// ������ -1 ���ؼ�
	}
	else {
		num4 = num2;				// ����� �״��
	}
	result = num3 + num4;
		printf("%d \n", result);		// ���ϱ� ��ɰ��� ��������� ����� ���ؼ� �ӽ÷� ����
}

// ���޹��� ���� ���� ����(���)���� ���� ���� ���
void AbsMinus(int num1, int num2) {			// ���� 2���� ���޹޴� �Լ�
	int num3 = 0, num4 = 0, result = 0;			// �������� : �Լ��� ���ǰ� �������ȸ� ������ ����
	if (num1 < 0) {
		num3 = num1 * -1;
	}
	else {
		num3 = num1;
	}
	if (num2 < 0) {
		num4 = num2 * -1;
	}
	else {
		num4 = num2;
	}
	result = num3 - num4;
	printf("%d \n", result);		// ���� ��ɰ��� ��������� ����� ���ؼ� �ӽ÷� ����
}

// ���� 3���� ���ϴ� �Լ�
void Plus3(int num1, int num2, int num3) {
	int result = num1 + num2 + num3;
	printf("%d \n", result);
}

int main0() {
	// ������Ʈ�� �����ϸ� main() �Լ��� �����Ѵ�.
	AbsPlus(3, 4);			// 3 + 4 == 7

	AbsPlus(-3, 4);		// |-3| + 4 == 7

 	AbsPlus(3, -4);			// 3 + |-4| == 7

	AbsPlus(-3, -4);		// |-3| + |-4| == 7

	AbsMinus(3, 4);			// 3 - 4 == -1

	AbsMinus(-3, 4);		// |-3| - 4 == -1

	AbsMinus(3, -4);			// 3 - |-4| == -1

	AbsMinus(-3, -4);		// |-3| - |-4| == -1

	Plus3(1, 2, 3);

	return 0;
}