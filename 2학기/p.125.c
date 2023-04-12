#include <stdio.h>
int main() {
	int i, j; 
	i = 2;
	for (j = 1; j <= 9; j++) {
		printf("%d X %d = %d\n", i, j, i * j);
	}
	return 0;
}