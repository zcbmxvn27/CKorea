#include <stdio.h>
#include <Windows.h>

void main() {
	int ��������1 = 0;
	char ��������2[100];
	int �ܹ���1 = 0;
	char �ܹ���2[100];
	int ���� = 0;
	int ���� = 0;
	int Ȯ�� = 0;
	char ����Ȯ��;
	char ������;
	printf("���� ������ �����ϼ��ּ���. (��ȣ�� �Է����ּ���)\n");
	printf("1.ī�� | 2.������ ����/��ȯ�� | 3.����\n");
	while (Ȯ�� == 0) {
		printf(">>>");
		scanf("%d", &��������1);
		switch (��������1) {
		case 1:
			sprintf(��������2, "ī��");
			Ȯ�� = 1;
			break;
		case 2:
			sprintf(��������2, "������ ����/��ȯ��");
			Ȯ�� = 1;
			break;
		case 3:
			sprintf(��������2, "����");
			Ȯ�� = 1;
			break;
		default:
			printf("�ٽ� �Է����ּ���\n");
			break;
		}
	}
	printf("\n");
	printf("�Ʒ����� �ܹ��Ÿ� ����ּ���. (��ȣ�� �Է����ּ���)\n");
	printf("1.ġ�� NO.5 [4,200] | ");
	printf("2.�ѿ�Ұ�� [7, 200]\n");
	printf("3.T-REX���� [3,800] | ");
	printf("4.��� [5,900]\n");
	printf("5.�Ұ����� [5,200] | ");
	printf("6.AZ���� [6,800]\n");
	printf("7.�ͱԿ���ǥ� [6,000] | ");
	printf("8.�ô����ź��� [5,800]\n");
	while (Ȯ�� == 1) {
		printf(">>>");
		scanf("%d", &�ܹ���1);
		switch (�ܹ���1) {
		case 1:
			sprintf(�ܹ���2, "ġ�� NO.5");
			���� = 4200;
			Ȯ�� = 0;
			break;
		case 2:
			sprintf(�ܹ���2, "�ѿ�Ұ��");
			���� = 7200;
			Ȯ�� = 0;
			break;
		case 3:
			sprintf(�ܹ���2, "T-REX ����");
			���� = 3800;
			Ȯ�� = 0;
			break;
		case 4:
			sprintf(�ܹ���2, "���");
			���� = 5900;
			Ȯ�� = 0;
			break;
		case 5:
			sprintf(�ܹ���2, "�Ұ�����");
			���� = 5200;
			Ȯ�� = 0;
			break;
		case 6:
			sprintf(�ܹ���2, "AZ����");
			���� = 6800;
			Ȯ�� = 0;
			break;
		case 7:
			sprintf(�ܹ���2, "�ͱԿ���ǥ�");
			���� = 6000;
			Ȯ�� = 0;
			break;
		case 8:
			sprintf(�ܹ���2, "�ô����ź���");
			���� = 5800;
			Ȯ�� = 0;
			break;
		default:
			printf("�ٽ� �Է����ּ���\n");
			break;
		}
	}
	printf("\n");
	printf("������ �Է����ּ���.");
	printf(">>>");
	scanf("%d", &����);
	printf("\n");
	printf("\n");
	printf("��ǰ : %s  |  ���� : %d  |  �ݾ� : %d  |  ���� ���� : %s \n", �ܹ���2, ����, ����, ��������2);
	printf("�ֹ��Ͻðڽ��ϱ�? (Y or N)\n");
	printf(">>>");
	getchar();
	scanf("%c", &����Ȯ��);
	if (����Ȯ�� == 'N') {

	}
	else {

	}
	
	if(!(strcmp(��������2, "����")) || (!strcmp(��������2, "������ ����/��ȯ��"))){
		printf("������ ���뿡�� ���͵帮�ڽ��ϴ�. \n");
		printf("�������� ������ �ֽñ� �ٶ��ϴ�, �����մϴ�.");
	}
	else {
		printf("�������� �������ðڽ��ϱ�? (Y or N)\n");
		printf(">>>");
		getchar();
		scanf("%c", &������);
		if (������ == 'Y') {
			printf("�������� �����");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".\n");
			Sleep(1000);
			printf("�������� ������ �ֽñ� �ٶ��ϴ�, �����մϴ�.");
		}
		else {
			printf("�̿����ּż� �����մϴ�.");
		}
	}


}