#include <stdio.h>

int main3() {
	int ����[5] = { 1000, 1500, 2000, 2500, 3000 };
	int sum = 0;
	//for������ ���� ���
	for (int i = 0; i < 5; i++)
	{
		printf("%d��° : %d��\n",i+1, ����[i]);
		sum += ����[i];
	}
	printf("���� : %d��", sum);

	return 0;
}