#include <stdio.h>

void main3() {
	// break : �ݺ��� ��� ����
	// continue : �ݺ��� ó������ (1ȸ�� ���)

	// for(�ʱⰪ:����;����){}
	for (int i = 1; i < 11; i++)
	{
		printf("%d \n", i);
	}

	for (int i = 1; i < 11; i++)
	{
		if (i % 2 == 1) {
			continue;
		}
		printf("%d \n", i);
	}

	int flag = 1;
	while (flag < 11) {
		printf("%d\n", flag);
		flag++;
	}
}