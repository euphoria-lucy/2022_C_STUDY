//04 switch-case 문을 이용한 연령대 맞추기

#include <stdio.h>

int main() {
	int age;
	
	printf("본인의 나이를 입력해주세요 : ");
	scanf_s("%d", &age);

	if (age < 0 || age > 200) {
		printf("나이를 다시 입력해주세요.");
	}
	else {
		switch (age / 10)
		{
		case 0: case 1:
			printf("당신은 10대이하입니다.\n"); break;
		case 2:
			printf("당신은 20대입니다.\n"); break;
		case 3:
			printf("당신은 30대입니다.\n"); break;
		case 4:
			printf("당신은 40대입니다.\n"); break;
		default:
			printf("당신은 50대이상입니다.\n");
		}
	}

	return 0;
}