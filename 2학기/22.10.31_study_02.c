#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

int main() {
    char ch1[] = "Hello";
    char ch2[] = "World";
    char hello[] = "Hello";

    // 문자열 길이 (null 문자까지의 길이 반환)
    printf("%d\n", strlen(ch1));

    // 문자열 비교 (같으면 0, 다르면 1)
    printf("%d\n", strcmp(ch1, ch2));
    printf("%d\n", strcmp(ch1, hello));

    // strcpy - 문자열 복사
    char* copied = malloc(sizeof(char) * 6);
    strcpy(copied, ch1);
    printf("%s\n", copied);

    // strcat - 문자열 이어 붙이기
    char* result = malloc((sizeof(char) * 10) + 1);
    strcpy(result, ch1);
    strcat(result, ch2);
    printf("%s\n", result);

    free(copied);
    free(result);
}