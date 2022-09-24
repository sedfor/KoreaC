#include <stdio.h>

//page 45 (1)

void main5() {
	char subject[] = "변수와 자료형";
	char name[] = "홍길동";
	int year = 2021;
	int month = 02;
	int day = 23;
	printf("오늘의 주제 : %s\n", subject);
	printf("프로그램 작성자 : %s\n", name);
	printf("프로그램 작성일 : %d.%02d.%d", year, month, day);

}