#include <stdio.h>
int main()
{
	int cup, sum = 0;
	scanf_s("%d", &cup);
	for (int i = 1; i <= cup; i++)
	{
		sum += i; //sum = sum + i;
	}

	printf("%d", sum);
	return 0;
}