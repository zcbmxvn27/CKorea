#include <stdio.h>

void main0() {
	// 출력 : 화면에 보이게 하는 것
	printf("복습\n");

	// 문장이 끝날땐 반드시 ';'(세미콜론)
	// 주석 : // 메모
	
	// 변수(수학) : 변하는 수
	// 변수(프로그래밍) : 저장공간
	// 자주 사용할 것 같은 혹은 자주 변경될 것 같은 값을 저장해놓기 위해서
	
	char 저장공간1 = 'a';
		printf("%c\n",저장공간1);

	// 변수는 타입을 갖고있습니다. (자료형)
	// char, int, float, double, ...
	// 변수를 만드려면 자료형을 먼저 쓰고 옆에다가 변수이름을 적어줍니다
	// 변수 선언
		int 숫자공간;					// 정수타입 저장공간 (정수형 변수)
		float 소수점있는숫자공간;		// 실수타입 저장공간 (실수형 변수)
		char 한글자공간;				// 문자타입 젖아공간 (문자형 변수)
		//변수 초기화 : 변수 선언과 동시에 값을 대입 (한번에)
		char 여러글자공간[100] = "Hello World";			// 문자열타입 저장공간 (문자열형 변수)
		
		// 값 대입
		// 변수명 = 값;
		숫자공간 = 314;					//숫자공간이라는 이름의 변수에 314를 저장
		소수점있는숫자공간 = 3.14f;		//변수에 3.14 저장
		한글자공간 = 'A';				//한글자공간 변수에 A를 저장
		
		// 변수 사용 : 사용하는 곳에 변수 이름을 적어주면 됩니다.
		printf("문자는 : %c\n", 한글자공간);
		printf("문자열은 : %s\n", 여러글자공간);
		printf("정수는 : %d\n", 숫자공간);
		printf("실수는 : %f\n", 소수점있는숫자공간);

		//출력 여러개의 변수 사용
		printf("%c %s %d %f\n", 한글자공간, 여러글자공간, 숫자공간, 소수점있는숫자공간);

		//숫자끼리는 연산이 가능 (계산, 비교, 등등)
		int sum = 숫자공간 + 소수점있는숫자공간;
		printf("%d \n", sum);
		
}