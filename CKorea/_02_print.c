#include <stdio.h>

void main2() {
	//���� ����� �� ���� �����ʹ� �����س��� : ����
	char name = 'w';		//���� ������� : char
	int number = 123;		//���� ������� : int
	float number2 = 3.14;	//�Ҽ��� �ִ� ���� ������� : float

	// ���� : �������
	//(��������� ����) + (��������̸�) = (������ ��);

	printf("Hello %c \n", name);
	printf("Hello %d \n" , number);
	printf("Hello %f \n", number2);
	printf("Hello %f \n", number2);
	printf("Hello %d \n", number);

	// %c : �ѱ���
	// %d : ����
	// %f : �Ҽ��� �ִ� ����
	// %s : ��������
}