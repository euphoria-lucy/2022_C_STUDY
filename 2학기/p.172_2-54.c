#include <stdio.h>
int addall(int k, int e, int m) { // ����� ���� �Լ� ����
	int all;
	all = k + e + m;
	printf("addall �Լ��� all���� %d\n", all); //all��(k, e, m�� ��ü ��)���
	                                           // all���� return ���� ����
}
int main() {
	int a, b, c;
	int all;
	a = 10; b = 20; c = 10;
	all = 2 * (a + b + c);  //all���� ���� a, b, c�� ��ü ���� 2�� ����
	addall(a, b, c); //addall �Լ� ȣ��
	printf("main �Լ��� all���� %d\n", all); // main�� all�� ���
	return 0;
}