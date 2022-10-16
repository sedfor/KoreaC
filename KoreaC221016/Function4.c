#include <stdio.h>

int number = 0;
void printNum(void) {
	printf("�������� number�� %d�� �����ϰ� �ִ�!\n", number);

	// �Լ��� return�� ���� �� �Լ��� �ڷ����� void
	// return; ������ �� ��
}

void staticNumber() {
	static int s_number=4;			// static���� (�������� �����ǳ� ���α׷��� ����� �� ������)
	s_number++;
	printf("%d\n", s_number);
}

void increaseNumber() {
	static int number = 0;
	number++;
	printf("number : %d\n", number);
}

int main5() {
	int number = 3;				// ���� ���������� �̸��� ���������� ������ ���������� �켱���� ���)
	printf("�������� number�� %d�� �����ϰ� �ִ�!\n", number);		// ���������� ��� �ȵǰ� ���������� ����
	printNum();

	staticNumber();
	staticNumber();
	staticNumber();
	
	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();
	return 0;
}



