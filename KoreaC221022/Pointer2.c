#include <stdio.h>

int main3() {

	// �迭 : �������� ������ �ϳ��� �����ϱ� ����
	int num[3]= {1, 2, 3};
	// ������ : ������ �ּҸ� �����ϴ� ����
	int num1 = 10;
	int* p_num1 = &num1;		// & : �ּ�

	p_num1 = &(num[0]);			// num�� ù��° ���� �ּҸ� ����

	printf("ù��° ���� �ּ� : %p\n", p_num1);
	printf("�迭�� �̸� : %p\n", num);
	printf("ù��° ���� �ּ� : %p\n", &num[0]);
	printf("�ι�° ���� �ּ� : %p\n", &num[1]);
	printf("����° ���� �ּ� : %p\n", &num[2]);
	
	char str[50];
	scanf("%s", str);			// �迭�� �̸��� ù��° ĭ�� �ּҸ� ��Ÿ��

	scanf("%d", &num1);			// �Ϲݺ����� �ּ�ǥ�ø� �������
	
	return 0;
}