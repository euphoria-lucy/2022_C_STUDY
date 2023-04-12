/* 1116, 2556, 2880 ..... 처럼 백의 자리와 십의 자리가 같은 수인
   4자리 숫자 중에서, 9의 배수를 모두 출력하고 그 갯수로 출력할 것
   (단, 결과값은 한 줄에 10개씩 출력되도록 할 것!!) */

#include <stdio.h>

void main() {

	int h, t;
	int count = 0;

	for (int i = 1000; i <= 9999; i++) {

		h = (i / 100) % 10;
		t = (i / 10) % 10;

		if ((h == t) && (i % 9 == 0)) {
			count++;
			printf("%d", i);
			if (count % 10 == 0) {
				printf("\n");
			}
		}

	}

	printf("정답은 %d개 입니다.", count);

}