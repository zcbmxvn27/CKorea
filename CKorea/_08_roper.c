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
	printf("10.0 / 3.0 = %f\n", result5);			//%�� f ���̿� [.(����)]�� ������ �ڽ��� ���ϴ� �Ҽ��� ������ŭ ����

	// % : ������ ���ϱ�
	int result9 = 10 % 3;					// == 1
	printf("10�� 3���� ���� �������� %d�̴�\n",result9);
	
	// ����� ���Ҷ�, Ȧ¦�� ���Ҷ�
	//3�� ��� == 3���� ���� �������� 0

	int num = 3;
	printf("num�� Ȧ���̸� 1, ¦���� 0 : %d\n",num % 2);
}