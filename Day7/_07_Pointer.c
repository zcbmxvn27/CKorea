#include <stdio.h>

void Swap(int* num1, int* num2) {
	int backup = *num1;			// num1의 값을 백업해둔다.
	*num1 = *num2;				// num2의 값으로 num1에 저장한다.
	*num2 = backup;				// 백업된 값을 num2에 넣는다

}

int main7() {
	int n1 = 3;
	int n2 = 2;
	printf("바꾸기 전 : %d, %d \n", n1, n2);
	// Swap이라는 함수를 통해서 n1과 n2의 값을 바꿔주고 싶음
	Swap(&n1, &n2);

	printf("바꾼 후 : %d, %d", n1, n2);

	return 0;
}

// only SW : 포인터 필요X (웹, 앱 : Java, Python)
// HW+SW : 하드웨어 동작을 위해선 포인터 필요 (펌웨어, IOT : C언어)