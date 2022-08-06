# include <stdio.h>

void main7() {
	//for (int i = 1; i < 10; i++) {
	//	printf("2 * %d = %d\n", i, 2 * i);
	//}

	int step = 0;
	printf("¸î´ÜÀ» Ãâ·ÂÇÒ±î¿ä?");
	scanf("%d", &step);

	for (int i = 1; i <= 9; i++) {
		printf("%d ¡¿ %d = %d \n", step, i, step * i);
	}
}