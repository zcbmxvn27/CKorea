#include <stdio.h>

void main6() {
	// if : ����
	// switch : ��ġ�ϴ� ��
	
	// ���� ����
	//1.���� 2.��� 3.������ 4.����
	printf("������ ������ ���ΰ���?");
	int choice;
	scanf("%d", &choice);

	switch (choice) {			// ()�ȿ��� �� ����
	case 1:
		printf("������ �ߴ�\n");
		break;
	case 2:
		printf("�� �ߴ�\n");
		break;
	case 3:
		printf("�������� ����ߴ�\n");
		break;
	case 4:
		printf("������ �ƴ�\n");
		break;
	default:
		printf("�ٽ� �������ּ���");
	}
}

// ���ǹ� : if~else if~else, switch~case~break