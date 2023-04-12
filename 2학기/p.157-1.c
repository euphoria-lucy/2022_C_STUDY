#include <stdio.h>
int main() {
	int k, m;
	int d[10] = { 1,5,3,2,1,4,2,5,3,1 };
	int cut[5] = { 0,0,0,0,0 };
	for (k = 0; k <= 9; k++) {
		for (m = 0; m <= 5; m++) {
			if (d[k] == m) {
				printf("%d", m);
			}
		}
	}
}