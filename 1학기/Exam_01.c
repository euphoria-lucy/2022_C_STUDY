// 01. 사각형의 가로와 세로를 입력받아 넓이를 구하는 프로그램 → 변수 설명하기 위해
// 변수 : 변하는 수, 상수 : 변하지 않는 수
// & : 주소
// 정적 프로그래밍 : 코드 손 댐, 다시 컴파일, 다시 실행 항상 값이 똑같음, 동적 프로그래밍 : 코드 손 안댐
// %d : int형 입력받기 위해

#include <stdio.h> // 기본적으로 필요

int main() { // 프로그래밍 준비 int 대신 void로 해도 됨 void : 메소드를 호출하면 받는 것이 없음,return 0이 없어야함 int : 호출하고 다시 받음, return 0;이 있어야함

	// 변수 선언
	int width, height;

	printf("가로 길이 입력 :  ");
	scanf_s("%d", &width); // 사용자로부터 정수를 입력받아서 width에 넣는데 주소로 찾아가기 위해

	printf("세로 길이 입력 :  ");
	scanf_s("%d", &height); //사용자로부터 정수를 입력받아서 height에 넣어 주소로 찾아가기 위해
	

	printf("가로 : %d, 세로 : %d, 넓이 : %d \n", width, height, (width * height));

	return 0;
}