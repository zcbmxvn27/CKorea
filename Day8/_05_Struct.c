#include <stdio.h>

// ����ü Human (�̸�, ����)
typedef struct Human {
	char* �̸�;
	int* ����;
} H;

// �Լ�1 Info(Human*) : �̸��� ���� ���
void Info(H* c1) {
	printf("�̸� : %s, ���� : %d \n", (* c1).�̸�, (* c1).����);
}

// �Լ�2 Modify(Human*) : scanf�� ���ؼ� ���̸� ����
void Modify(H* c1) {
	printf("���� �� >>> ");
	scanf("%d", &(* c1).����);
}

int main() {
	H ��� = { "������", 14 };
	// ������� �Լ�
	Info(&���);

	// ���� �Լ�
	Modify(&���);

	// ������� �Լ�
	Info(&���);

	return 0;
}