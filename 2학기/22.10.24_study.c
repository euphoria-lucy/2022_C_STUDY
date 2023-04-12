#include <stdio.h>

/* study_01
int add(int a, int b) {
	return a * 2;
}


// Q) 한 개의 정수값을 받아 2배의 값을 돌려주는 double_num 함수 정의


int main() {
	int result = add(2, 3);
	double num = add(2 * 2, 2 * 3);
	printf("%d\n", result);
	printf("%lf\n", num);
} */

/* STUDY_02
int add(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
	return *a + *b;
}

int main() {
	int a = 100;
	int b = 200;
	int result = add(&a, &b);
	printf("%d %d %d\n", result, a, b);
} */