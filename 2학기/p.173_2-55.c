#include <stdio.h>
int rectangle(int a)
{
	int result;
	result = a * a;
	return result;
}

int main() {
	int a, area;
	printf("�� ���� ���� �Է�[cm] : ");
	scanf_s("%d", &a);
	area = rectangle(a);
	printf("���簢���� ����=%d[cm], ����=%d[cm^2]\n", a, area);
	return 0;
}