#include <stdio.h>

//page 45 (1)

void main5() {
	char subject[] = "������ �ڷ���";
	char name[] = "ȫ�浿";
	int year = 2021;
	int month = 02;
	int day = 23;
	printf("������ ���� : %s\n", subject);
	printf("���α׷� �ۼ��� : %s\n", name);
	printf("���α׷� �ۼ��� : %d.%02d.%d", year, month, day);

}