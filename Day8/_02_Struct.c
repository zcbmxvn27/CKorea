#include <stdio.h>

// ����ü : �ϳ��� ������ ���� ���� �ٸ� �ڷ����� �������� �ѹ��� ����
struct Person {
	char* name;
	int age;
	float height;
	float weight;
};

int main2() {
	char* name1 = "ȫ�浿", * name2 = "��¯��", * name3 = "�ƹ���", * name4 = "�̼���", * name5 = "�庸��";
	int age[5] = { 12, 13, 14, 15, 16 };
	float height[5] = { 155.5f, 160.0f, 170.0f, 180.0f, 188.0f };
	float weight[5] = { 55.5f, 60.0f, 66.0f, 75.0f, 80.0f };

	printf("�̸��� %s�̰�, ���̴� %d, Ű�� %f, �����Դ� %f�� ����̴�. \n", name1, age[0], height[0], weight[0]);
	printf("�̸��� %s�̰�, ���̴� %d, Ű�� %f, �����Դ� %f�� ����̴�. \n", name2, age[1], height[1], weight[1]);
	printf("�̸��� %s�̰�, ���̴� %d, Ű�� %f, �����Դ� %f�� ����̴�. \n", name3, age[2], height[2], weight[2]);
	printf("�̸��� %s�̰�, ���̴� %d, Ű�� %f, �����Դ� %f�� ����̴�. \n", name4, age[3], height[3], weight[3]);
	printf("�̸��� %s�̰�, ���̴� %d, Ű�� %f, �����Դ� %f�� ����̴�. \n", name5, age[4], height[4], weight[4]);

	// ���� ������ �迭�� �Ѱ���
	printf("\n============================================\n");

	struct Person ȫ�浿 = { "ȫ�浿", 12, 155.5f, 55.5f };
	struct Person ��¯�� = { "��¯��", 13, 160.0f, 60.0f };
	struct Person �ƹ��� = { "�ƹ���", 14, 170.0f, 66.0f };
	struct Person �̼��� = { "�̼���", 15, 180.0f, 75.0f };
	struct Person �庸��;
	�庸��. age = 16;
	�庸��.name = "�庸��";
	�庸��.height = 188.0f;
	�庸��.weight = 80.0f;

	printf("�̸��� %s�̰�, ���̴� %d, Ű�� %2f, �����Դ� %2f�� ����̴�. \n", �庸��.name, �庸��.age, �庸��.height, �庸��.weight);

	return 0;
}