#include <stdio.h>

void main5() {
	// ���� ���
	//���� : 90�̻��̸� A, 80�̻��̸� B, 70�̻��̸� C, 70�̸��̸� D
	char grade;			// ���
	int score = 0;		// ����

	// ������ �Է¹ް�

	// ������ ���� ����� �˷��ּ���
	

	printf("������ �Է��ϼ��� : ");		//85��, B���
	scanf("%d", &score);
	if (score >= 90) {
		grade = 'A';
	}
	else if (score >= 80) {
		grade = 'B';
	}
	else if (score >= 70) {
		grade = 'C';
	}
	else {
		grade = 'D';
	}
	printf("%d��, %c���\n", score, grade);
}