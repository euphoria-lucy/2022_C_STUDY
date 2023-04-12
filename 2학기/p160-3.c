#include<stdio.h>
int main() {
	static int a[5][5]; // 상수 (값을 정할 때) static은 배열할때만 사용
	int k, m, n = 4;
	
	for (k = 0; k <= n; k++) { // 줄
		a[k][0] = 1;
		printf("%d", a[k][0]);
		for (m = 0; m < k; m++) { // 삼각형 만드는 아이
			a[k][m + 1] = a[k - 1][m] + a[k - 1][m + 1];
			printf("%d", a[k][m + 1]);
		}
		printf("\n");
	}

	return 0;
}