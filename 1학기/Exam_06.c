//06.while���� �̿��ؼ� -1, 3, -5, 7, -9, 11 ~~ 99�� ����ϰ� ������ ����Ͻÿ�.
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

	printf("\n������ %d�Դϴ�.", sum);
	return 0;
}