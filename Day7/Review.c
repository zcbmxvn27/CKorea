#include <stdio.h>
#include "Review.h"			// Review.h ������ ����ٿ��ֱ��

int main0(){
	int sum = add(30, 50);
	printf("%d\n", sum);
	
	float division = div(30.0f, 50.0f);
	printf("%f\n", division);

	return 0;
}

// �ڷ��� �Լ���(���޹��� ��){ �Լ��� ���Ǹ� ������ �ڵ�; }
int add(int n1, int n2) {
	int result = n1 + n2;
	return result;
}

//  ����ڰ� ���� ���� ��� : �Լ�
float Div(float n1, float n2) {
	float result = n1 / n2;
	return result;
}