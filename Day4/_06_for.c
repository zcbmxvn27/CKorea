#include <stdio.h>

void main6() {
	// for�� ����ؼ� 1~10���� ���
	//1~10������ ��
	int �հ� = 0;
	for (int i = 0; i < 10; i++)
	{
		�հ� += (i + 1);
		printf("%d\n", �հ�);
	}

	printf("%d\n", �հ�);

	int b = 0;
	int sum = 0;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &b);
	for (int a = 1; a <= b; a++) {
		sum = sum + a;
	}
	printf("������ %d�Դϴ�\n", sum);
}