// 02. ���� �������� �Է¹޾� ���� ���̿� �ѷ��� ���ϴ� ���α׷�
#include <stdio.h>

void main() {
	int radius = 0; //����
	float area = 0.0, round = 0.0, pi = 3.141592;

	printf("** ���� ���̿� �ѷ� ** \n");
	printf("�������� ���� �Է� �� : ");
	scanf_s("%d", &radius);

	area = radius * radius * pi;
	round = 2 * pi * radius;

	printf("���� ���� : %f\n", area);
	printf("���� �ѷ� : %f\n", round);
	//main
}
void choi() {

	//����� ���� �Լ�
}