#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

	srand((unsigned int)time(NULL));

	// ���� ����
	int l1, l2, l3, l4, l5, l6;
	int lotto[6];
	int i, j, index, temp;

	l1 = rand() % 45 + 1;

	// l1�� l2 �ߺ� ����
	do {
		l2 = rand() % 45 + 1;
	} while (l1 == l2);

	// l1�� l2�� l3 �ߺ� ����
	do {
		l3 = rand() % 45 + 1;
	} while (l3 == l1 || l3 == l2);


	do {
		l4 = rand() % 45 + 1;
	} while (l4 == l1 || l4 == l2 || l4 == l3);

	do {
		l5 = rand() % 45 + 1;
	} while (l5 == l1 || l5 == l2 || l5 == l3 || l5 == l4);

	do {
		l6 = rand() % 45 + 1;
	} while (l6 == l1 || l6 == l2 || l6 == l3 || l6 == l4 || l6 == l5);

	// printf("�̹��� ����� ���ڴ� %d %d %d %d %d %d �Դϴ�. \t", l1, l2, l3, l4, l5, l6);

	// ������ �ζ� ���� 5���� �������� ���� (��������)
	lotto[0] = l1;
	lotto[1] = l2;
	lotto[2] = l3;
	lotto[3] = l4;
	lotto[4] = l5;
	lotto[5] = l6;

	for (i = 0; i < 5; i++) {
		index = i;
		for (j = i + 1; j < 6; j++) {
			if (lotto[index] > lotto[j]) {
				index = j;
			} // if lotto[index]
		} // for j

		temp = lotto[i];
		lotto[i] = lotto[index];
		lotto[index] = temp;

	} // for i
	printf("�̹��� ����� ��÷��ȣ�� ");
	for (i = 0; i < 6; i++) {
		printf("%d ", lotto[i]);
	} // for
	printf(" �Դϴ�.");
}