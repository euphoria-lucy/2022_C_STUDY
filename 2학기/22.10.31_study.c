/* STUDY_01
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES // ���� ���� ��� ���� ���ؼ� �ʿ�
#include <math.h>
#include <time.h>
// Sleep �Լ� ����ϱ� ���ؼ� �ʿ�
#include <Windows.h>

int ranged_rand(int range_min, int range_max) {
    return ((double)rand() / RAND_MAX) * ((range_max + 1) - range_min) + range_min;
}

int main() {
    // ���밪 ���ϱ�
    printf("%d\n", abs(4));
    printf("%d\n", abs(-4));

    // rand �Լ��� 0���� RAND_MAX(32767) ������ �ǻ� ���� ������ ��ȯ
    // (stdlib.h ��� �ʿ�)
    printf("%d\n", RAND_MAX);
    for (int i = 0; i < 10; i++) printf("%d ", rand());
    printf("\n============\n");
    for (int i = 0; i < 10; i++) printf("%d ", ranged_rand(1, 6));

    time_t start, end;
    // �ʴ����� ���н� �ð� ��ȯ
    time(&start);
    Sleep(2000);
    time(&end);
    printf("\n%ld", start);
    printf("\n%ld", end);
    printf("\ntime : %f\n", (float)(end - start));

    // �ﰢ �Լ� (���� �ƴ� ���Ȱ��� �Ѱܾ� ��)
    // https://t1.daumcdn.net/cfile/tistory/990B874F5C81375A05
    double sin0deg = sin(0 * M_PI / 180);
    printf("sin(0degree) %f\n", sin0deg);
    printf("sin(30degree) %f\n", sin(30 * M_PI / 180));
    printf("sin(45degree) %f\n", sin(45 * M_PI / 180));
    printf("sin(90degree) %f\n", sin(90 * M_PI / 180));
}  */

/* STUDY_02 
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
} */