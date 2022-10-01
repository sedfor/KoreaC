#include <stdio.h>

void main123() {

	// 홀수면 홀수
	// 짝수면 짝수
	//int num = 0;

	//// 조건문 if(){}
	//// 소괄호 안에 내용이 맞으면 {}를 실행하고
	//// 소괄호 안에 내용이 틀리면 {}를 무시한다
	//// ()안에는 조건을 적고, {}안에는 조건이 맞을때만 실행할 코드를 적는다
	//if (num % 2 == 0) {
	//	printf("짝수\n");

	//}

	//// num %2 == 1이 맞으면
	//if (num % 2 == 1) {
	//	// 실행
	//	printf("홀수\n");
	//}

	//교재 105 page

	//num = 3;

	//if (num < 3) {
	//	printf("num is smaller than 3!");
	//}

	//if (num == 3) {
	//	printf("num is 3!");
	//}
	//if (num > 3) {
	//	printf("num is bigger than 3!");
	//}

	int age;
	scanf("%d", &age);
	//if (age >= 20) {
	//	printf("성인");
	//}
	//else {
	//	printf("미성년자");
	//}

	// 10보다 작으면 어린이
	// 10 ~ 19 이면 10대
	// 20 ~ 29 이면 20대
	// 30 ~ 39 이면 30대
	// 기타

	if (age < 10) {
		printf("어린이");
	}
	else if (age < 20) {
		printf("10대");
	}
	else if (age < 30) {
		printf("20대");
	}
	else if (age < 40) {
		printf("30대");
	}
	else {
		printf("기타");
	}


	}
