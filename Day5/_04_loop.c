#include <stdio.h>

void main4() {
	// break�� continue�� Ȱ��
	for (int i = 0; i < 100; i++){
		// 1~50���� ¦���� ������
		if (i % 2 == 1 || i == 0) {
			continue;
		}
		if(i == 52) {
			break;
		}
		printf("%d \n", i);
	}

}
