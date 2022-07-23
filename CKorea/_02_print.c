#include <stdio.h>

void main2() {
	//자주 사용할 것 같은 데이터는 저장해놓자 : 변수
	char name = 'w';		//글자 저장공간 : char
	int number = 123;		//숫자 저장공간 : int
	float number2 = 3.14;	//소수점 있는 숫자 저장공간 : float

	// 변수 : 저장공간
	//(저장공간의 형태) + (저장공간이름) = (저장할 값);

	printf("Hello %c \n", name);
	printf("Hello %d \n" , number);
	printf("Hello %f \n", number2);
	printf("Hello %f \n", number2);
	printf("Hello %d \n", number);

	// %c : 한글자
	// %d : 숫자
	// %f : 소수점 있는 숫자
	// %s : 여러글자
}