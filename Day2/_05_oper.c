#include <stdio.h>

void main5() {
	//�񱳿�����
	//==, !=, >, < , >=, <=
	// Ʋ���� 0, ������ 1 (�Ǵ� �ٸ� ����)
	printf("%d \n", 1 == 1);				// ���� ==
	printf("%d \n", 1 != 2);				// �ٸ���
	printf("%d \n", 1 > 2);				// ũ��
	printf("%d \n", 1 < 2);				// �۴�
	printf("%d \n", 1 >= 2);				// ũ�ų� ����
	printf("%d \n", 1 <= 2);				// �۰ų� ����

	int age = 15;
	//���迬����
	// &&, ||, !
	// && : �׸���, �յ� ��� ������ �°�, �ϳ��� Ʋ���� Ʋ��
	printf("%d \n",10 < age && age < 20);		//Ʋ���� 0, ������ 1(Ȥ�� �׿�)
	// || : or �յ� ���� �ϳ��� �¾Ƶ� ���� ��, �Ѵ� Ʋ������ Ʋ��
	printf("%d \n", age >20 || age <= 10);		//�ϳ��� ������ 1
	// ! : not, ������ Ʋ�� ������ , Ʋ���� ���� ������ �ٲ�
	printf("%d \n", !(age < 10));				// 0 -> 1, 1 -> 0
}