#include<stdio.h>
int main() {
	int decimal = 123, octal = 0123, hex = 0x3f; // �� ������ ��� ����
	double float1 = 1234567.89; // �� �Ǽ��� ��� ����
	char char1 = 'A'; // �� ���� ��� ����
	char string[6] = "happy"; // �� ���ڿ� ��� ����
	printf("10����:%d -> 8����: %o-> 16���� : % x\n",decimal, decimal, decimal); // ��
		printf("�Ǽ��� 1234567.89�� ���� ��°�=%e\n", float1); // ��
	printf("���� A�� ASCII��=%d\n", char1); // ��
	printf("�迭 string�� ��°� = %s\n", string); // ��
	return 0;
}