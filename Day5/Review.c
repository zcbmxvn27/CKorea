#include <stdio.h>

void main0() {
	// ��� : if, switch, for, while, ...
	// ���ǹ�/�ݺ���
	// if(){} : ()�ȿ� ������ ������ {}���� ����, ������ Ʋ���� {}���� ����
	if (1 == 1) {
		printf("1�� 1�� ���� \n");
	}

	if (1 != 1) {
		printf("���� \n");
	}

	// c���� 0�� Ʋ���ٴ� ǥ��, 1�� �´ٴ� ǥ��
	if (0) {				// if�� Ʋ���� �˻�
		printf("����\n");
	}
	else if (1) {			// ��� Ʋ���� ����
		printf("����\n");
	}
	else {					// ��� Ʋ���� ����
		printf("����\n");
	}

	int age = 14;
	if (age < 10) {
		printf("���\n");
	}
	else if (age < 20) {
		printf("10��\n");
	}
	else if (age < 30) {
		printf("20��\n");
	}
	else if (age < 40) {
		printf("30��\n");
	}
	else {
		printf("�� �ۿ� \n");
	}

	// switch(){} : ()�ȿ� ������ case�� ������ �ش� case���� ����
	switch (age/10) {			// switch : ��ġ�ϴ��� �˻�
	case 0:
		printf("���]\n");
		break;
	case 1:
		printf("10��\n");
		break;
	case 2:
		printf("20��\n");
		break;
	case 3:
		printf("30��\n");
		break;
	case 4:
		printf("40��\n");
		break;
	default:
		printf("�� �ۿ�\n");
	}

	// if~else if~else
	// switch~case~break

	//�ݺ��� : while, for, do~while
	printf("�ȳ�");			//3��
	printf("�ȳ�");			//3��
	printf("�ȳ�\n");			//3��
	// �ȳ� 10000����? => �ݺ���

	//�ȳ� 3��
	int flag = 0;
	while (flag < 30) {
		printf("�ȳ�\n");
		flag++;
	}
	printf("������ : %d", flag);
	// while(){} : ()�ȿ� ������ ������ {}�� �����ϰ� ()�� ���ư�, Ʋ�� ������ ����

	while (1 != 1) {
		printf("�ȳ�\n");
	}
	for (int i = 0; i < 10000; i++)
	{
		printf("�ȳ�\n");			// �ȳ� 10000��
	}
}