#include <stdio.h>

void main3() {
	// ����ī�带 ����ϴ� .
	// ���̸� �Է¹޾Ƽ�
	// 14�� �̸��̸� ��� �Դϴ�. ����� 500���Դϴ�
	// 14~19 û�ҳ� �Դϴ�. ����� 750�� �Դϴ�.
	// 20�� �̻��̸� ���� �Դϴ�. ����� 1000�� �Դϴ�.
	
	//���̿� �ݾ��� ������ Ȱ��

	int age = 0, ��� = 0;
		printf("���̸� �Է����ּ��� : ");
		scanf("%d", &age);
		if (age < 14) {
			��� = 500;
			printf("��� �Դϴ�. ����� %d�� �Դϴ�", ���);
		}
		else if (age < 20) {		// �� ������ Ʋ���� 20�� �̸��� ���
			��� = 750;
			printf("û�ҳ� �Դϴ�. ����� %d�� �Դϴ�.", ���);
		}
		else {		// �׹ۿ� �������� ���
			��� = 1000;
			printf("���� �Դϴ�. ����� %d�� �Դϴ�.", ���);
		}
}