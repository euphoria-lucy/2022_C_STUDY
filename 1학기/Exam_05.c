//05.1~100 사이의 숫자 중 3의 배수이면서 5의 배수의 갯수와 합을 출력
#include <stdio.h>

int main() {
	int sum = 0, cnt = 0;
	for (int i = 1; i <= 100; i++)
		if (i % 15 == 0) {
			sum += i;
			cnt++;
		}

	printf("갯수 : %d | 합 : %d", cnt, sum);
	return 0;
}