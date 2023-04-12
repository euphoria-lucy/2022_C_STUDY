#include <stdio.h>
int main() {
	int a = 1234;
	float b = 1.235;
	printf("%d\n", a); 
	printf("%5d\n", a);
	printf("%f\n", b);
	printf("%9f\n", b);
	printf("%9.2f\n", b);
	return 0;
}