#include <stdio.h>

void main9() {
	for (int k = 2; k <= 9; k++)
	{
		printf("====%d단====\t", k);
	}
	printf("\n");

	// ±¸±¸´Ü
	for (int i = 0; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			printf("%d * %d = %d\t", j, i, i * j);
		}
		printf("\n");
	}
}