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
		printf("1~100 ������ ���� �� �ϳ��� �Է����ּ��� : ");
		scanf_s("%d", &you);

		if (you < com) {
			printf("�� ���� �� ū �� �Դϴ�. \n");
		}
		else if (you > com) {
			printf("�� ���� �� ���� �� �Դϴ�. \n");
		}
		else {
			printf("���� �� �Դϴ�.\n");
			break;
		}

	} // while

	printf("����� %dȸ ���� ���߼̽��ϴ�.", count);
	printf("\n");
	
	if (count <= 4) {
		printf("����� õ�籺��~~~");
	}
	else if (count <= 8) {
		printf("����� �� ��±���~~~");
	}
	else {
		printf("����ϼ���");
	}
}