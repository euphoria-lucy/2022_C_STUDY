#include <stdio.h>
#include <stdlib.h> // rand()
#include <time.h> // time()

char* result(int su);

void main() {

	srand((unsigned)time(NULL));
	int com, you, select;

	while (1) {  // 1�� �ǹ��ϴ� �� : true

		com = rand() % 3 + 1; // com = 1 ~ 3������ ������
		printf("\n����� ���ϴ� ���� �Է��ϼ��� (1 : ����, 2 : ����, 3 : ��) : ");
		scanf_s("%d", &you);
		printf("\n");

		// ��� 1 : �ʱ��� �ڽ�
		/* if (com == 1) { // ��ǻ�� : ����
			switch (you) {
				case 1:	
					printf("��ǻ�� : ���� ��� : ���� =======> �����ϴ�.\n");
					break;
				case 2:
					printf("��ǻ�� : ���� ��� : ���� =======> ����� �̰���ϴ�.\n");
					break;
				case 3:
					printf("��ǻ�� : ���� ��� : �� =======> ��ǻ�Ͱ� �̰���ϴ�.\n");
					break;
				default:
					printf("1 ~ 3������ ������ �Է����ּ��� : ");
					break;
			} // switch
		} // if ��ǻ�� : ����

		else if (com == 2){ // ��ǻ�� : ����
			switch (you) {
			case 1:
				printf("��ǻ�� : ���� ��� : ���� =======> ��ǻ�Ͱ� �̰���ϴ�.\n");
				break;
			case 2:
				printf("��ǻ�� : ���� ��� : ���� =======> �����ϴ�.\n");
				break;
			case 3:
				printf("��ǻ�� : ���� ��� : �� =======> ����� �̰���ϴ�.\n");
				break;
			default:
				printf("1 ~ 3������ ������ �Է����ּ��� : ");
				break;
			} // switch
		} // if ��ǻ�� : ����

		else if (com == 3) { // ��ǻ�� : ��
			switch (you) {
			case 1:
				printf("��ǻ�� : �� ��� : ���� =======> ����� �̰���ϴ�.\n");
				break;
			case 2:
				printf("��ǻ�� : �� ��� : ���� =======> ��ǻ�Ͱ� �̰���ϴ�.\n");
				break;
			case 3:
				printf("��ǻ�� : �� ��� : �� =======> �����ϴ�.\n");
				break;
			default:
				printf("1 ~ 3������ ������ �Է����ּ��� : ");
				break; 
			} // switch
		} // if ��ǻ�� : �� */

		// �߱��� �ڽ�

		/* switch (you) {
			case 1:
				printf("��� : %s \t", "����");
				break;
			case 2:
				printf("��� : %s \t", "����");
				break;
			case 3:
				printf("��� : %s \t", "��");
				break;
		} // switch

		switch (com) {
		case 1:
			printf("��ǻ�� : %s \t", "����");
			break;
		case 2:
			printf("��ǻ�� : %s \t", "����");
			break;
		case 3:
			printf("��ǻ�� : %s \t", "��");
			break;
		} // switch

		// ����ڰ� �̱�� ��� ����� ��
		if ((you == 1 && com == 3) || (you == 2 && com == 1) || (you == 3 && com == 2)) {
			printf("=======> ����� �̰���ϴ�.");
		}
		else if ((you == 1 && com == 1) || (you == 2 && com == 2) || (you == 3 && com == 3)) { // else if (you == com)�� ����ص� ��
			printf("=======> �����ϴ�.");
		}
		else {
			printf("=======> ��ǻ�Ͱ� �̰���ϴ�.");
		} */


		// ����� �ڽ�

		/* switch (you) {
			case 1:
				printf("��� : %s \t", "����");
				break;
			case 2:
				printf("��� : %s \t", "����");
				break;
			case 3:
				printf("��� : %s \t", "��");
				break;
		} // switch

		switch (com) {
			case 1:
				printf("��ǻ�� : %s \t", "����");
				break;
			case 2:
				printf("��ǻ�� : %s \t", "����");
				break;
			case 3:
				printf("��ǻ�� : %s \t", "��");
				break;
		} // switch */

		printf("��� : %s", result(you));
		printf("��ǻ�� : %s", result(com));

		/* switch (you - com) {
			case -2: case 1:
				printf("����� �̰���ϴ�. \n");
				break;
			case -1 : case 2 :
				printf("��ǻ�Ͱ� �̰���ϴ�. \n");
				break;
			case 0 :
				printf("�����ϴ�. \n");
				break;
		} // switch */

		// �ֻ���� �ڽ�

		switch ((you - com +3) % 3) {
		case 1:
			printf("����� �̰���ϴ�. \n");
			break;
		case 2:
			printf("��ǻ�Ͱ� �̰���ϴ�. \n");
			break;
		case 0:
			printf("�����ϴ�. \n");
			break;
		} // switch

		printf("\n����Ͻðڽ��ϱ�? (1 : ���, 0 : �׸�) : ");
		scanf_s("%d", &select);

		if (select == 0) break;
	}

} // main

char* result(int su) {
	static *str;

	if (su == 1) {
		str = "����\t";
	}
	else if (su == 2) {
		str = "����\t";
	}
	else if (su == 3) {
		str = "��\t";
	}
	else {
		str = "1~3������ ������ �Է����ּ���...\t";
	}
	return str;
}