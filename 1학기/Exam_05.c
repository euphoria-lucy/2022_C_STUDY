//05.1~100 ������ ���� �� 3�� ����̸鼭 5�� ����� ������ ���� ���
#include <stdio.h>

int main() {
	int sum = 0, cnt = 0;
	for (int i = 1; i <= 100; i++)
		if (i % 15 == 0) {
			sum += i;
			cnt++;
		}

	printf("���� : %d | �� : %d", cnt, sum);
	return 0;
}