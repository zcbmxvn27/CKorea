#include <stdio.h>

// int g_num = 0;				// �������� : {}�ȿ��� ������� ������ �ƴ�, {}�� ��� ���� ����			(������ ��� ����! ���߿� ���)

int function3(int* p_num) {
	int num = 3333;			// ��������
	*p_num = num;			// �Ѱܹ��� ��ġ���ٰ� num���� ����

	return 0;
}

int function4(int num) {
	
	// 3333�� ���
	printf("%d \n", num);
}

int main() {
	// ������ : C�� ����ϴ� ����
	int num = 0;
	int* p_num = &num;			// num ��ġ�� �����ϰ�
	function3(p_num);			// ��ġ�� �Ѱܼ�
	printf("%d\n", p_num);

	return 0;
}