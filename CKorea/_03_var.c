#include <stdio.h>


main3() {
	// 변수 : 값을 저장하는 공간(저장공간)

	// 저장공간 생성(변수 선언)
	// 자료형 변수이름;
	int  숫자공간;
	float  소수점있는숫자공간;
	char 글자저장공간;					// 한글자
	char 글자여러개저장공간[100] = "글자 여러개 공간";		// 100개의 글자 저장가능

	// 대입 (값을 넣음)
	// 변수이름 = 값;
	숫자공간 = 314;						//숫자공간에 314를 넣음
	소수점있는숫자공간 = 3.14f;			//실수공간에 3.14를 넣음
	글자저장공간 = 'A';					//글자저장공간에 A를 넣음

	// = : 수학에서의 같다와는 다른 의미
	// = : 오른쪽에 있는 값을 왼쪽에 있는 공간에 담는다

	// 변수 사용(저장공간 안에있는 값을 사용)
	// 변수이름을 써주면 됨

	printf("%d \n", 숫자공간);
	printf("%f \n", 소수점있는숫자공간);
	printf("%c \n", 글자저장공간);
	printf("%s \n", 글자여러개저장공간);
}