#include<stdio.h>
int main() {
	int su[7] = { 1,0,1,1,0,1,1 };
	int a, cnt = 0, pa;
	for (a = 0; a < 7; a++)
	{
		if (su[a] == 1)
			cnt += 1;
	}

	printf("%d�̹Ƿ�\n", cnt);

	if (cnt % 2 == 0)
		printf("¦�� : 1");
	else
		printf("Ȧ�� : 0");
}