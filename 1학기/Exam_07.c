/* 산수퀴즈 _02 : 100미만의 연속된 두 자릿수의 짝수 3개를 곱하였더니 4****2가 되었다.
이 세 개의 수는 어떤 수인지, 그리고 결과는 얼마인지 구하는 프로그램을 for문을 1번만 사용해서 작성하시오.*/

#include <stdio.h>

void main() {

	for (int i = 10; i < 100; i=i+2) {
	int sum = (i * (i + 2) * (i + 4));
		
	if (sum / 100000 == 4 && sum % 10 == 2) {
		printf("%d * %d * %d = %d\n", i, (i+2), (i+4), sum);
		}

	}
	/*int num = 0;
	int sum = 0;
	if (num < 100) {
		if (num = num + 2) {
			for (int i = 0; i < 100; i++) {
				num *= sum;
			}
		}
		printf("숫자 : %d, 결과 : %d", num, sum);
	}*/
}