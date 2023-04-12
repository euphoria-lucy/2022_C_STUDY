#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	int com, you;
	int count = 0;
	srand((unsigned)time(NULL));

	com = rand() % 100 + 1;
	printf("com = %d\n", com);

	while (1) {
		count++;
		printf("1~100 사이의 숫자 중 하나를 입력해주세요 : ");
		scanf_s("%d", &you);

		if (you < com) {
			printf("그 보다 더 큰 수 입니다. \n");
		}
		else if (you > com) {
			printf("그 보다 더 작은 수 입니다. \n");
		}
		else {
			printf("같은 수 입니다.\n");
			break;
		}

	} // while

	printf("당신은 %d회 만에 맞추셨습니다.", count);
	printf("\n");
	
	if (count <= 4) {
		printf("당신은 천재군요~~~");
	}
	else if (count <= 8) {
		printf("당신은 좀 노는군요~~~");
	}
	else {
		printf("노력하세요");
	}
}