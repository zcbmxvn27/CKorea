#include <stdio.h>

// int g_num = 0;				// �������� : {}�ȿ��� ������� ������ �ƴ�, {}�� ��� ���� ����			(������ ��� ����! ���߿� ���)

int function1() {
	int num = 3333;			// �������� : ������� �߰�ȣ�� ����� ������ ������
	return num;
}

int function2() {
	int num1 = function1();
	printf("%d \n", num1);
	// 3333�� ���
}

int main4() {
	function2();
	printf("%d\n", 3333);

	return 0;
 }