#include <stdio.h>

// int g_num = 0;				// 전역변수 : {}안에서 만들어진 변수가 아님, {}를 벗어날 일이 없음			(지금은 사용 금지! 나중에 사용)

int function3(int* p_num) {
	int num = 3333;			// 지역변수
	*p_num = num;			// 넘겨받은 위치에다가 num값을 대입

	return 0;
}

int function4(int num) {
	
	// 3333을 출력
	printf("%d \n", num);
}

int main() {
	// 포인터 : C언어를 사용하는 이유
	int num = 0;
	int* p_num = &num;			// num 위치를 저장하고
	function3(p_num);			// 위치를 넘겨서
	printf("%d\n", p_num);

	return 0;
}