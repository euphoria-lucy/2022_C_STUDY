#include <stdio.h>
#include <stdlib.h> // rand()
#include <time.h> // time()

char* result(int su);

void main() {

	srand((unsigned)time(NULL));
	int com, you, select;

	while (1) {  // 1이 의미하는 것 : true

		com = rand() % 3 + 1; // com = 1 ~ 3사이의 랜덤수
		printf("\n당신이 원하는 값을 입력하세요 (1 : 가위, 2 : 바위, 3 : 보) : ");
		scanf_s("%d", &you);
		printf("\n");

		// 방법 1 : 초급자 코스
		/* if (com == 1) { // 컴퓨터 : 가위
			switch (you) {
				case 1:	
					printf("컴퓨터 : 가위 당신 : 가위 =======> 비겼습니다.\n");
					break;
				case 2:
					printf("컴퓨터 : 가위 당신 : 바위 =======> 당신이 이겼습니다.\n");
					break;
				case 3:
					printf("컴퓨터 : 가위 당신 : 보 =======> 컴퓨터가 이겼습니다.\n");
					break;
				default:
					printf("1 ~ 3사이의 정수만 입력해주세요 : ");
					break;
			} // switch
		} // if 컴퓨터 : 가위

		else if (com == 2){ // 컴퓨터 : 바위
			switch (you) {
			case 1:
				printf("컴퓨터 : 바위 당신 : 가위 =======> 컴퓨터가 이겼습니다.\n");
				break;
			case 2:
				printf("컴퓨터 : 바위 당신 : 바위 =======> 비겼습니다.\n");
				break;
			case 3:
				printf("컴퓨터 : 바위 당신 : 보 =======> 당신이 이겼습니다.\n");
				break;
			default:
				printf("1 ~ 3사이의 정수만 입력해주세요 : ");
				break;
			} // switch
		} // if 컴퓨터 : 바위

		else if (com == 3) { // 컴퓨터 : 보
			switch (you) {
			case 1:
				printf("컴퓨터 : 보 당신 : 가위 =======> 당신이 이겼습니다.\n");
				break;
			case 2:
				printf("컴퓨터 : 보 당신 : 바위 =======> 컴퓨터가 이겼습니다.\n");
				break;
			case 3:
				printf("컴퓨터 : 보 당신 : 보 =======> 비겼습니다.\n");
				break;
			default:
				printf("1 ~ 3사이의 정수만 입력해주세요 : ");
				break; 
			} // switch
		} // if 컴퓨터 : 보 */

		// 중급자 코스

		/* switch (you) {
			case 1:
				printf("당신 : %s \t", "가위");
				break;
			case 2:
				printf("당신 : %s \t", "바위");
				break;
			case 3:
				printf("당신 : %s \t", "보");
				break;
		} // switch

		switch (com) {
		case 1:
			printf("컴퓨터 : %s \t", "가위");
			break;
		case 2:
			printf("컴퓨터 : %s \t", "바위");
			break;
		case 3:
			printf("컴퓨터 : %s \t", "보");
			break;
		} // switch

		// 사용자가 이기는 모든 경우의 수
		if ((you == 1 && com == 3) || (you == 2 && com == 1) || (you == 3 && com == 2)) {
			printf("=======> 당신이 이겼습니다.");
		}
		else if ((you == 1 && com == 1) || (you == 2 && com == 2) || (you == 3 && com == 3)) { // else if (you == com)로 대신해도 됨
			printf("=======> 비겼습니다.");
		}
		else {
			printf("=======> 컴퓨터가 이겼습니다.");
		} */


		// 상급자 코스

		/* switch (you) {
			case 1:
				printf("당신 : %s \t", "가위");
				break;
			case 2:
				printf("당신 : %s \t", "바위");
				break;
			case 3:
				printf("당신 : %s \t", "보");
				break;
		} // switch

		switch (com) {
			case 1:
				printf("컴퓨터 : %s \t", "가위");
				break;
			case 2:
				printf("컴퓨터 : %s \t", "바위");
				break;
			case 3:
				printf("컴퓨터 : %s \t", "보");
				break;
		} // switch */

		printf("당신 : %s", result(you));
		printf("컴퓨터 : %s", result(com));

		/* switch (you - com) {
			case -2: case 1:
				printf("당신이 이겼습니다. \n");
				break;
			case -1 : case 2 :
				printf("컴퓨터가 이겼습니다. \n");
				break;
			case 0 :
				printf("비겼습니다. \n");
				break;
		} // switch */

		// 최상급자 코스

		switch ((you - com +3) % 3) {
		case 1:
			printf("당신이 이겼습니다. \n");
			break;
		case 2:
			printf("컴퓨터가 이겼습니다. \n");
			break;
		case 0:
			printf("비겼습니다. \n");
			break;
		} // switch

		printf("\n계속하시겠습니까? (1 : 계속, 0 : 그만) : ");
		scanf_s("%d", &select);

		if (select == 0) break;
	}

} // main

char* result(int su) {
	static *str;

	if (su == 1) {
		str = "가위\t";
	}
	else if (su == 2) {
		str = "바위\t";
	}
	else if (su == 3) {
		str = "보\t";
	}
	else {
		str = "1~3사이의 정수만 입력해주세요...\t";
	}
	return str;
}