// ���� �߻� �Ѱ� ����

#include <stdio.h>
#include <stdlib.h> // ����(rand()) �߻���Ű�� ���� ����� �߰�
#include <time.h> // �ð�(time) �Լ��� �߻���Ű�� ���� ����� �߰�

void main() {

	int i;

	// ����1 : �����Ҷ����� ���� ���� ������ �߻�
	/* printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand()); */


	// ����2 : srand(�õ尪)�� �̿��Ͽ� ���� �߻�
	// �Ź� ������ ������ ���� �ٲ�
	//srand(23); // �õ尪�� ������, ���� ������ �߻��Ѵ�.
	//printf("%d\n", rand());
	//printf("%d\n", rand());
	//printf("%d\n", rand());
	//printf("%d\n", rand());

	// printf("%d", (unsigned int)time(NULL));
	// (unsigned int)time(NULL);

	// ����3 : (unsigned int)time(NULL) �ð��� �̿��Ͽ� ������ �߻�
	/* srand((unsigned int)time(NULL));
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand()); */

	/* srand((unsigned int)time(NULL));

	for (int i = 0; i <= 100; i++) {
		printf("%d \n",rand() % 100 + 1);
	} */

	/* srand((unsigned int)time(NULL));

	for (int i = 0; i < 7; i++) {
		printf("%d \n", rand() % 45 + 1);
	} */

	srand((unsigned int)time(NULL));

	printf("�̹��� ����� �ζ� ��÷��ȣ��? \n");
	for (int i = 0; i < 7; i++) {
		printf("%d \n", rand() % 45 + 1);
	}
		printf("�Դϴ�. �����մϴ�. �ݶ��սô�");


} // main