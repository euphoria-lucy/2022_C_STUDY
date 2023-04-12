#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand((unsigned)time(NULL));
	int c1 = 0, c2 = 0, c3 = 0;
	int h1 = 0, h2 = 0, h3 = 0;
	int count = 0;
	int strike = 0, ball = 0;

	c1 = rand() % 9 + 1;

	do {
		c2 = rand() % 9 + 1;
	} while (c1 == c2);

	do {
		c3 = rand() % 9 + 1;
	} while (c3 == c1 || c3 == c2);

	// printf("%d %d %d", c1, c2, c3);

	for (count = 0; strike != 3; count++) {

		strike = 0; ball = 0;
		printf("숫자 3개 입력 (ex 1 2 3) : ");
		scanf_s("%d", &h1);
		scanf_s("%d", &h2);
		scanf_s("%d", &h3);

		if (h1 == c1) strike++;
		else if (h1 == c2 || h1 == c3) ball++;

		if (h2 == c2) strike++;
		else if (h2 == c1 || h2 == c3) ball++;

		if (h3 == c3) strike++;
		else if (h3 == c1 || h3 == c2) ball++;

		printf("[%dB %dS] \n\n", strike, ball);

	} // for

	printf("%d번 만에 맞추셨습니다.", count);

} // main