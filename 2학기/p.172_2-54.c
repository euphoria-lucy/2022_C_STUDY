#include <stdio.h>
int addall(int k, int e, int m) { // 사용자 정의 함수 정의
	int all;
	all = k + e + m;
	printf("addall 함수의 all값은 %d\n", all); //all값(k, e, m의 전체 합)출력
	                                           // all값을 return 하지 않음
}
int main() {
	int a, b, c;
	int all;
	a = 10; b = 20; c = 10;
	all = 2 * (a + b + c);  //all값은 변수 a, b, c의 전체 합의 2배 지정
	addall(a, b, c); //addall 함수 호출
	printf("main 함수의 all값은 %d\n", all); // main의 all값 출력
	return 0;
}