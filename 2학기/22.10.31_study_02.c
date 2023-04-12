#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

int main() {
    char ch1[] = "Hello";
    char ch2[] = "World";
    char hello[] = "Hello";

    // ���ڿ� ���� (null ���ڱ����� ���� ��ȯ)
    printf("%d\n", strlen(ch1));

    // ���ڿ� �� (������ 0, �ٸ��� 1)
    printf("%d\n", strcmp(ch1, ch2));
    printf("%d\n", strcmp(ch1, hello));

    // strcpy - ���ڿ� ����
    char* copied = malloc(sizeof(char) * 6);
    strcpy(copied, ch1);
    printf("%s\n", copied);

    // strcat - ���ڿ� �̾� ���̱�
    char* result = malloc((sizeof(char) * 10) + 1);
    strcpy(result, ch1);
    strcat(result, ch2);
    printf("%s\n", result);

    free(copied);
    free(result);
}