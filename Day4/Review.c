#include <stdio.h>

void main0() {
	// ���ǹ� : if~else, switch~case~break
	// if(){}
	//switch(){}

	int number = 10;

	// ==, >, <, >=, <= : ������ 1, Ʋ���� 0
	if (number == 0) {
		// if : ()�� ������ {}����
		printf("���ڴ� 0�� ���� \n");
	}
	else if (number == 10) {		//else if : if�� ()�� Ʋ���� ����
		printf("���ڴ� 10�� ���� \n");
	}
	else if (number == 20) {		//else if : if�� ���� else if�� ()�� Ʋ���� ����
		printf("���ڴ� 20�� ����. \n");
	}
	else {			// else : if�� else if�� ()�� ��� Ʋ���� {}����
		printf("��ġ�ϴ� ���ڰ� ����. \n");
	}

	switch (number) {
	case 0:
		printf("���ڴ� 0�� ����.\n");
		break;
	case 10:
		printf("���ڴ� 10�� ����.\n");
		break;
	case 20:
		printf("���ڴ� 20�� ����.\n");
		break;
	default:
		printf("��ġ�ϴ� ���ڰ� ����.\n");
	}
}