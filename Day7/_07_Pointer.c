#include <stdio.h>

void Swap(int* num1, int* num2) {
	int backup = *num1;			// num1�� ���� ����صд�.
	*num1 = *num2;				// num2�� ������ num1�� �����Ѵ�.
	*num2 = backup;				// ����� ���� num2�� �ִ´�

}

int main7() {
	int n1 = 3;
	int n2 = 2;
	printf("�ٲٱ� �� : %d, %d \n", n1, n2);
	// Swap�̶�� �Լ��� ���ؼ� n1�� n2�� ���� �ٲ��ְ� ����
	Swap(&n1, &n2);

	printf("�ٲ� �� : %d, %d", n1, n2);

	return 0;
}

// only SW : ������ �ʿ�X (��, �� : Java, Python)
// HW+SW : �ϵ���� ������ ���ؼ� ������ �ʿ� (�߿���, IOT : C���)