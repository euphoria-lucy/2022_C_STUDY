#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

	srand((unsigned int)time(NULL));

	// 변수 선언
	int l1, l2, l3, l4, l5, l6;
	int lotto[6];
	int i, j, index, temp;

	l1 = rand() % 45 + 1;

	// l1와 l2 중복 제거
	do {
		l2 = rand() % 45 + 1;
	} while (l1 == l2);

	// l1와 l2와 l3 중복 제거
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

	// printf("이번주 행운의 숫자는 %d %d %d %d %d %d 입니다. \t", l1, l2, l3, l4, l5, l6);

	// 추출한 로또 숫자 5개를 오름차순 정렬 (삽입정렬)
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
	printf("이번주 행운의 당첨번호는 ");
	for (i = 0; i < 6; i++) {
		printf("%d ", lotto[i]);
	} // for
	printf(" 입니다.");
}