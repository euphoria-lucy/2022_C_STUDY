#include<stdio.h>
int main()
{
	char a[20];
	printf("문자열 입력?:");
	scanf_s("%s", a, 20);
	printf("입력 문자열 출력!:%s\n", a);
	printf("2번째 문자 출력!:%c\n", a[1]);
	return 0;
}