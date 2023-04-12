//06.while문을 이용해서 -1, 3, -5, 7, -9, 11 ~~ 99를 출력하고 총합을 출력하시오.
#include <stdio.h>

int main() {
	int i = 1, tmp = 1, sum = 0;
	while (i <= 99) {
		if (tmp % 2 != 0) {
			printf("%d ", -i);
			sum += -i;
		}

		else {
			printf("%d ", i);
			sum += i;
		}
		tmp++;
		i += 2;
	}

	printf("\n총합은 %d입니다.", sum);
	return 0;
}