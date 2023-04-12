#include <stdio.h>
int main() {
	int score;
	printf("당신의 점수는? ");
	scanf_s("%d", &score);
	if (score >= 90)
		printf("A");
	else if (score >= 80)
		printf("B");
	else if (score >= 70)
		printf("C");
	else if (score >= 60)
		printf("D");
	else
		printf("E");
	return 0;
}