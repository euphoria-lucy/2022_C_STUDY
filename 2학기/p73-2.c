#include <stdio.h>
int main() {
	int a ;
	int b ;
	int c ;
	printf("ù ��° ���� : ");
	scanf_s("%d", &a);
	printf("�� ��° ���� : ");
	scanf_s("%d", &b);
	printf("�� ��° ���� : ");
	scanf_s("%d", &c);
	int plus = a + b + c;
	double div = ((double) a + b + c) / 3;
	char name[20];
	printf("�̸� : ");
	scanf_s("%s", &name, sizeof(name));
	printf("%s\n", name);
	printf("3������ �� : %d\n" ,plus);
	printf("3������ ��� %.2f\n" , div);
	return 0;
}