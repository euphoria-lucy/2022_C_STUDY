#include <stdio.h>
int main() {
	int a ;
	int b ;
	int c ;
	printf("첫 번째 점수 : ");
	scanf_s("%d", &a);
	printf("두 번째 점수 : ");
	scanf_s("%d", &b);
	printf("세 번째 점수 : ");
	scanf_s("%d", &c);
	int plus = a + b + c;
	double div = ((double) a + b + c) / 3;
	char name[20];
	printf("이름 : ");
	scanf_s("%s", &name, sizeof(name));
	printf("%s\n", name);
	printf("3과목의 합 : %d\n" ,plus);
	printf("3과목의 평균 %.2f\n" , div);
	return 0;
}