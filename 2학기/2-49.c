#include<stdio.h>
int main()
{
	char a[20];
	printf("���ڿ� �Է�?:");
	scanf_s("%s", a, 20);
	printf("�Է� ���ڿ� ���!:%s\n", a);
	printf("2��° ���� ���!:%c\n", a[1]);
	return 0;
}