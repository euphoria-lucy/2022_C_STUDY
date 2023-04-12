/* STUDY_01 
#include <stdio.h>

int main() {
	printf("Hello");

	return 0;
} */
/* STUDY_02 
#include <stdio.h>

int main() {
	/* 1번
	char strs[][10] = { "hello", "c", "program" };
	printf("%s\n", strs); //hello
	printf("%s\n", strs[0]); // hello
	printf("%s\n", strs[1]); // c
	printf("%s\n", strs[2]); // program */

	// Q2) 다음 코드는 실행 가능할까? 가능하다면 printf의 출력 결과는?
	/* 2번
	char strs[][10] = { "hello", "c", "program" };
	strs[0][5] = '1';
	strs[0][6] = '2';
	strs[0][7] = '3';
	strs[0][8] = '4';
	strs[0][9] = '*';
	printf("%s\n", strs[0]); */

	// p159_1 실습문제
	int k, m;
	int d[10] = { 1, 5, 3, 2, 1, 4, 2, 5, 3, 1 };
	int cnt[5] = { 0, 0, 0, 0, 0 };

	return 0;
} */
