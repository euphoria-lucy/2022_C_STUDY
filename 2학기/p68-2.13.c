#include<stdio.h>
int main() {
	int decimal = 123, octal = 0123, hex = 0x3f; // ① 정수형 상수 선언
	double float1 = 1234567.89; // ② 실수형 상수 선언
	char char1 = 'A'; // ③ 문자 상수 선언
	char string[6] = "happy"; // ④ 문자열 상수 선언
	printf("10진수:%d -> 8진수: %o-> 16진수 : % x\n",decimal, decimal, decimal); // ⑤
		printf("실수형 1234567.89의 지수 출력값=%e\n", float1); // ⑥
	printf("문자 A의 ASCII값=%d\n", char1); // ⑦
	printf("배열 string의 출력값 = %s\n", string); // ⑧
	return 0;
}