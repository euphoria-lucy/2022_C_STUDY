#include<stdio.h>
int main() {
	static int a[5][5]; // ��� (���� ���� ��) static�� �迭�Ҷ��� ���
	int k, m, n = 4;
	
	for (k = 0; k <= n; k++) { // ��
		a[k][0] = 1;
		printf("%d", a[k][0]);
		for (m = 0; m < k; m++) { // �ﰢ�� ����� ����
			a[k][m + 1] = a[k - 1][m] + a[k - 1][m + 1];
			printf("%d", a[k][m + 1]);
		}
		printf("\n");
	}

	return 0;
}