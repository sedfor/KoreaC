#include <stdio.h>

// �Լ� : �ڵ带 �����ϴ� ���(���� �������� �ڵ带 �������� ������ �� �ְ� ���)
// 1. ����
// 2. ����� ���� ������ (���)

// ���񰪴��ϱ��� �̸����� �ڵ带 ����ϰ� ���� ���޹ް� ���� �Ŀ� ����� �˷��ش�.
// () : ���� ���޹޴� �Ű������� (�ӽú���)
// return : ���� ���� ���� ����� ���� ���� (����˷��ֱ�)
// �Լ� ���ʿ� �ڷ��� : �Լ��� �ڷ���, return�� �ڷ����� ��ġ�������
int ���񰪴��ϱ�(int n1, int n2) {
	// ���밪���� ���ϱ�(������ ����� �ٲ۴��� ���ϱ�)
	int result = 0;

	if (n1 < 0) {
		n1 = -n1;
	}
	if (n2 < 0) {
		n2 = -n2;
	}
	result = n1 + n2;
	return result;			// ������� ����� ���� ����
}

int ������(int value, int n) {
	int result = 0;
	switch (n) {
	case 0:
		result = 1;
		break;
	case 1:
		result = value;
		break;
	case 2:
		result = value * value;
		break;
	case 3:
		result = value * value * value;
		break;
	case -1:
		result = 1 / value;
		break;
	}
	
	return result;

}

int main2() {

	int num1 = 3;
	int num2 = -4;
	int result = 0;
	
	result = num1 + num2;			// return ���ϱ� �� ���

	// n1�� num1�� ���, n2�� num2�� ��´�
	result = ���񰪴��ϱ�(num1,num2);		// ���� ���� ��ȣ +,-
	printf("���� ���ϱ��� ����� %d\n", result);

	// �����ϱ�
	int result1 = ������(num1, 2);
	printf("���� ��� : %d\n", result1);

	// ������ �ϱ�
	int result2 = ������(num2, 3);
	printf("������ ��� : %d\n", result2);

	// ������ �Ͱ� �������� ���� ���� ���ϱ�
	
	result = ���񰪴��ϱ�(result1, result2);
	printf("���� ���ϱ��� ����� %d\n", result);

	return 0;

}