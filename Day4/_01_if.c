#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// #define : ��ó����, ������
// #include : ���� �����ϱ�, �ش� ���Ͽ� �ִ� �ڵ尡 �ִ� ������ ���

void main1() {
	int year = 0;
	printf("�⵵�� �Է��ϼ��� >>");
	scanf("%d", &year);

	// ���⿩�� ���
	// ���� : 4�� ����̸鼭 100�� ����� �ƴ�, Ȥ�� 400�� ��� (2������ 29�Ͽ� ����, ������ 28��)  

	//printf("�����Դϴ�");
	//printf("������ �ƴմϴ�");
	if (year % 4 == 0 && year % 100 != 0) {
		printf("�����Դϴ�\n");
	}
	else if (year % 400 == 0) {
		printf("�����Դϴ�\n");
	}
	else {
		printf("������ �ƴմϴ�\n");
	}
}