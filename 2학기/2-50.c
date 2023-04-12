#include<stdio.h>
int main() {
	int f[2][4] = { 1,2,3,4,11,12,13,14 };
	int i, j, haeng = 3, yeal = 2;
	for (i = 0; i < yeal; i++)
	{
		for (j = 0; j < haeng + 1; j++)
		{
			printf("%3d", f[i][j]);
		}
		printf("\n");
	}
	return 0;
}