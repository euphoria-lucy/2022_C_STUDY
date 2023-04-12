#include <stdio.h>
int rectangle(int a)
{
	int result;
	result = a * a;
	return result;
}

int main() {
	int a, area;
	printf("한 변의 길이 입력[cm] : ");
	scanf_s("%d", &a);
	area = rectangle(a);
	printf("정사각형의 길이=%d[cm], 면적=%d[cm^2]\n", a, area);
	return 0;
}