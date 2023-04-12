/* STUDY_01
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES // 수학 관련 상수 접근 위해서 필요
#include <math.h>
#include <time.h>
// Sleep 함수 사용하기 위해서 필요
#include <Windows.h>

int ranged_rand(int range_min, int range_max) {
    return ((double)rand() / RAND_MAX) * ((range_max + 1) - range_min) + range_min;
}

int main() {
    // 절대값 구하기
    printf("%d\n", abs(4));
    printf("%d\n", abs(-4));

    // rand 함수는 0부터 RAND_MAX(32767) 범위의 의사 난수 정수를 반환
    // (stdlib.h 헤더 필요)
    printf("%d\n", RAND_MAX);
    for (int i = 0; i < 10; i++) printf("%d ", rand());
    printf("\n============\n");
    for (int i = 0; i < 10; i++) printf("%d ", ranged_rand(1, 6));

    time_t start, end;
    // 초단위의 유닉스 시간 반환
    time(&start);
    Sleep(2000);
    time(&end);
    printf("\n%ld", start);
    printf("\n%ld", end);
    printf("\ntime : %f\n", (float)(end - start));

    // 삼각 함수 (도가 아닌 라디안값을 넘겨야 함)
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
} */