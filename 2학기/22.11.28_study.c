#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* int my_strlen(char* str) {
	// 0 ���� ������ ���� �ݺ� �ϸ鼭 ���� �ϳ� ������ �� ++ �����ֱ�
	int cnt = 0;
	while (1) {
		if (*str == 0) break;
		printf("%c", *str);
		cnt++;
		str++;
	}

	return cnt;
}

int main() {
	char str[] = "Hello";
	int len = my_strlen(str);
	printf("%d\n", len); // 5���
} */

/* void my_strcpy(char* dest, char* src) {
	while (1) {
		if (*src == 0) {
			*dest = 0;
			break;
		}
		*dest = *src;
		dest++;
		src++;
	}

}

int main() {
	char str[] = "Hello";
	char copied[6] = { 65, 65, 65, 65, 65, 65 };
	my_strcpy(copied, str);
	printf("%s\n", copied);
} */

int main() {
	char s1[] = "Hello";
	char s2[] = "Hello";
	char s3[] = "World";
	printf("%d\n", my_strcmp(s1, s2)); // �����Ƿ� 1
	printf("%d\n", my_strcmp(s1, s3)); // �ٸ��Ƿ� 0
	printf("%d\n", my_strcmp("Hello World", "Hello")); // 0
	printf("%d\n", my_strcmp("Hello", "Hello World")); // 0
}