/* STUDY_01 
// �Լ� �ٱ��� ������ ���� => ���� ����
int g1 = 100;
double g2 = 2.0;
char g3 = 'g';

int func() {
    // ��𼭵�
    printf("(inside func)\n");
    printf("%d\n", g1);
    printf("%f\n", g2);
    printf("%c\n", g3);
}

int main() {
    // ���� ����
    printf("%d\n", g1);
    printf("%f\n", g2);
    printf("%c\n", g3);
    // �б�Ӹ� �ƴ϶�, �� ���浵 ����
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