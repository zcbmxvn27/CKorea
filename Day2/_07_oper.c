#include <stdio.h>

void main() {
	int num1 = 0, score1 = 0;
	int num2 = 0, score2 = 0;
	int num3 = 0, score3 = 0;
	int num4 = 0, score4 = 0;
	int name2 = 0, result = 0;
	char name1[50];
	// �н��� ��Ģ����
	//�̸��� �Է��ϼ��� (���)
	//�̸� (�Է�)
	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", &name1);
	printf("�й��� �Է��ϼ��� : ");
	scanf("%d", &name2);
	printf("-------------------------------------------------------------------------------------------------------\n");
	printf("������ �����մϴ� \n");
	printf("\n");
	//1 + 1
	printf("1 + 1 = ");
	scanf("%d", &num1);
	(num1 == 2) ? printf("�����Դϴ�.\n") : printf("�����Դϴ�.\n");
	(num1 == 2) ? score1 = 1 : score1 = 0;
	// 2 - 1
	printf("2 - 1 = ");
	scanf("%d", &num2);
	(num2 == 1) ? printf("�����Դϴ�.\n") : printf("�����Դϴ�.\n");
	(num2 == 1) ? score2 = 1 : score2 = 0;
	// 3*3
	printf("3 �� 3 = ");
	scanf("%d", &num3);
	(num3 == 9) ? printf("�����Դϴ�.\n") : printf("�����Դϴ�.\n");
	(num3 == 9) ? score3 = 1 : score3 = 0;
	//10/2
	printf("10 �� 2 = ");
	scanf("%d", &num4);
	(num4 == 5) ? printf("�����Դϴ�.\n") : printf("�����Դϴ�.\n");
	(num4 == 5) ? score4 = 1 : score4 = 0;

	printf("-------------------------------------------------------------------------------------------------------\n");
	printf("�̸�:%s | �й�:%d \n", name1, name2);
	printf("1 + 1 = %d \n", num1);
	printf("2 - 1 = %d \n", num2);
	printf("3 �� 3 = %d \n", num3);
	printf("10 �� 2 = %d \n", num4);
	printf("\n");
	printf("�����ϼ̽��ϴ�! \n");

	// +, -, *, /
	// ���� =
	// % ������ ���ϱ�

}