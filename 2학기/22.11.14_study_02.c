#include <stdio.h>

int main() {
	int* p1;
	int* p2;
	int a = 100;
	p1 = a;
	p2 = &a;
	printf("%d\n", p1);
	printf("%d\n", p2);
	printf("%d\n", *p1);
	printf("%d\n", *p2);
}