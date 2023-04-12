#include <stdio.h>

int add(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
	return *a + *b;
}

int main() {
	int a = 100;
	int b = 200;
	int result = add(&a, &b);
	printf("%d %d %d\n", result, a, b);
}