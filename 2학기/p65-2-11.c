#include<stdio.h>
const int var = 87;  // ��. ��� ���� var ����� �ʱ�ȭ
int main(void)
{
	int i = 5, add = 0;
	add =i+var;   // ��. ��� ���� var ���
	printf("add=%d\n", add);  // ��. ���
	return 0;
}