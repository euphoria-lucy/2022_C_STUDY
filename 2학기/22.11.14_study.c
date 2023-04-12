/* STUDY_01 
// 함수 바깥에 선언한 변수 => 전역 변수
int g1 = 100;
double g2 = 2.0;
char g3 = 'g';

int func() {
    // 어디서든
    printf("(inside func)\n");
    printf("%d\n", g1);
    printf("%f\n", g2);
    printf("%c\n", g3);
}

int main() {
    // 접근 가능
    printf("%d\n", g1);
    printf("%f\n", g2);
    printf("%c\n", g3);
    // 읽기뿐만 아니라, 값 변경도 가능
    g1 = 200;
    func();
} */

/* STUDY_02 
#include <stdio.h>

int main() {
    int* p1;
    int* p2;
    int a = 100;
    p1 = a;
    p2 = &a;
    printf("%d\n", p1);
    printf("%d\n", p2);
    printf("%d\n", *p1);
    printf("%d\n", *p2);
} */