#include<stdio.h>
const int var = 87;  // ①. 상수 변수 var 선언과 초기화
int main(void)
{
	int i = 5, add = 0;
	add =i+var;   // ②. 상수 변수 var 사용
	printf("add=%d\n", add);  // ③. 출력
	return 0;
}