//04 switch-case ���� �̿��� ���ɴ� ���߱�

#include <stdio.h>

int main() {
	int age;
	
	printf("������ ���̸� �Է����ּ��� : ");
	scanf_s("%d", &age);

	if (age < 0 || age > 200) {
		printf("���̸� �ٽ� �Է����ּ���.");
	}
	else {
		switch (age / 10)
		{
		case 0: case 1:
			printf("����� 10�������Դϴ�.\n"); break;
		case 2:
			printf("����� 20���Դϴ�.\n"); break;
		case 3:
			printf("����� 30���Դϴ�.\n"); break;
		case 4:
			printf("����� 40���Դϴ�.\n"); break;
		default:
			printf("����� 50���̻��Դϴ�.\n");
		}
	}

	return 0;
}