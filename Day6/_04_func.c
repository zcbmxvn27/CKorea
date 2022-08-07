#include <stdio.h>

// int g_num = 0;				// 전역변수 : {}안에서 만들어진 변수가 아님, {}를 벗어날 일이 없음			(지금은 사용 금지! 나중에 사용)

int function1() {
	int num = 3333;			// 지역변수 : 만들어진 중괄호를 벗어나면 공간이 없어짐
	return num;
}

int function2() {
	int num1 = function1();
	printf("%d \n", num1);
	// 3333을 출력
}

int main4() {
	function2();
	printf("%d\n", 3333);

	return 0;
 }