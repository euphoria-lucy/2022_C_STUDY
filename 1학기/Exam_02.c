// 02. 원의 반지름을 입력받아 원의 넓이와 둘레를 구하는 프로그램
#include <stdio.h>

void main() {
	int radius = 0; //선언
	float area = 0.0, round = 0.0, pi = 3.141592;

	printf("** 원의 넓이와 둘레 ** \n");
	printf("반지름에 대한 입력 값 : ");
	scanf_s("%d", &radius);

	area = radius * radius * pi;
	round = 2 * pi * radius;

	printf("원의 넓이 : %f\n", area);
	printf("원의 둘레 : %f\n", round);
	//main
}
void choi() {

	//사용자 정의 함수
}