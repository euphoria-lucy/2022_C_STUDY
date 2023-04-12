// 난수 발생 총괄 정리

#include <stdio.h>
#include <stdlib.h> // 난수(rand()) 발생시키기 위해 헤더를 추가
#include <time.h> // 시간(time) 함수를 발생시키기 위해 헤더를 추가

void main() {

	int i;

	// 문제1 : 실행할때마다 같은 값이 난수로 발생
	/* printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand()); */


	// 문제2 : srand(시드값)을 이용하여 난수 발생
	// 매번 실행할 때마다 값이 바뀜
	//srand(23); // 시드값이 같으면, 같은 난수가 발생한다.
	//printf("%d\n", rand());
	//printf("%d\n", rand());
	//printf("%d\n", rand());
	//printf("%d\n", rand());

	// printf("%d", (unsigned int)time(NULL));
	// (unsigned int)time(NULL);

	// 문제3 : (unsigned int)time(NULL) 시간을 이용하여 난수를 발생
	/* srand((unsigned int)time(NULL));
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand()); */

	/* srand((unsigned int)time(NULL));

	for (int i = 0; i <= 100; i++) {
		printf("%d \n",rand() % 100 + 1);
	} */

	/* srand((unsigned int)time(NULL));

	for (int i = 0; i < 7; i++) {
		printf("%d \n", rand() % 45 + 1);
	} */

	srand((unsigned int)time(NULL));

	printf("이번주 행운의 로또 당첨번호는? \n");
	for (int i = 0; i < 7; i++) {
		printf("%d \n", rand() % 45 + 1);
	}
		printf("입니다. 축하합니다. 반띵합시다");


} // main