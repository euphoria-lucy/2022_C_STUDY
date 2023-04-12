#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

	srand((unsigned int)time(NULL));

	for (int i = 1; i <= 6; i++) {
		printf("%d \n", rand() % 45 + 1);
	}

}