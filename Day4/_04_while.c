#include <stdio.h>

void main4() {

	int flag = 0;
	while (flag < 5) {
		// Ƚ���� ���� ���� flag�� �ٸ� ���� ��� ���� (flag�� ������ ����)
		printf("������ %d��° ���� �� \n", flag + 1);

		//while �ȿ��� if ��� ����
		if (flag > 2) {
			printf("2�� �ʰ��߽��ϴ�. \n");
		}
		flag++;
	}

}