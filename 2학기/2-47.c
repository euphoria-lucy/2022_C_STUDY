#include<stdio.h>
int main() {
	char d[7] = { 'd', 'i', 'g', 'i', 't', 'a', 'l' };
	int i;
	for (i = 0; i < 7; i++)
		printf("d[%d] = %c\n", i, d[i]);
	return 0;
}