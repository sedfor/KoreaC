// page 223
#include <stdio.h>
#include "Function2.h"

int getBigger(int n1, int n2)
{
	if (n1 > n2) {
		return n1;
	}
	else if (n1 < n2) {
		return n2;
	}
	else {
		return 0;
	}
}
void guide(void) {
	printf("inputNumber �Լ��� ���� ������ �Է��� �� �ֽ��ϴ�.\n");
	printf("���� printNumber �Լ��� ���� �Է��� ������ ����� ���� �ֽ��ϴ�.\n");
}

void printNumber(int num) {
	printf("����� �Է��� ������ %d�Դϴ�.\n", num);
}
int inputNumber(void) {
	int num;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &num);

	return num;
}

int main3() {
	
	int result;
	guide();
	int num = inputNumber();
	printNumber(num);
	num = inputNumber();
	printNumber(num);

	result = getBigger(3, 5);
	printf("ù ��° ��� : %d\n", result);

	result = getBigger(8, 2);
	printf("�� ��° ��� : %d\n", result);

	result = getBigger(4, 4);
	printf("�� ��° ��� : %d\n", result);

	return 0;

}

int add(int a, int b)			// �Լ� ����{}
{		
	return a + b;
}