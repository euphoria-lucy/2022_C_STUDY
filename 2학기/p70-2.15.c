#include<stdio.h>
int main() {
	unsigned int max = 2147483647; // ��
	printf("%d\n", max);
	max = max + 1;
	printf("%u\n", max); // ��
	return 0;
}