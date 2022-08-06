#include <stdio.h>

void main4() {
	// break와 continue를 활용
	for (int i = 0; i < 100; i++){
		// 1~50까지 짝수만 나오게
		if (i % 2 == 1 || i == 0) {
			continue;
		}
		if(i == 52) {
			break;
		}
		printf("%d \n", i);
	}

}
