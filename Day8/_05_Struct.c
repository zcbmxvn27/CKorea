#include <stdio.h>

// 구조체 Human (이름, 나이)
typedef struct Human {
	char* 이름;
	int* 나이;
} H;

// 함수1 Info(Human*) : 이름과 나이 출력
void Info(H* c1) {
	printf("이름 : %s, 나이 : %d \n", (* c1).이름, (* c1).나이);
}

// 함수2 Modify(Human*) : scanf를 통해서 나이를 수정
void Modify(H* c1) {
	printf("나이 값 >>> ");
	scanf("%d", &(* c1).나이);
}

int main() {
	H 사람 = { "신희재", 14 };
	// 정보출력 함수
	Info(&사람);

	// 수정 함수
	Modify(&사람);

	// 정보출력 함수
	Info(&사람);

	return 0;
}