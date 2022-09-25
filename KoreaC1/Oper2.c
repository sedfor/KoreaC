#include <stdio.h>
#include <math.h>

void main() {
	int number1 = 3 + 4 + 5;
	int number2 = 3 + 4 * 5;	// 23
	int number3 = (3 + 4) * 5;	// 35
	float number4 = number3 / 3.0f;	// 11.xxxx

	// page 86 #3
	// 짱구의 기말고사 성적 : 평균 구하기
	// 국어 : 86, 영어 : 75, 수학 : 88, 사회 : 60, 과학 : 97

	int n1 = 86;
	int n2 = 75;
	int n3 = 88;
	int n4 = 60;
	int n5 = 97;
	float result = (n1 + n2 + n3 + n4 + n5) / 5.0f;
	printf("짱구의 기말고사 성적 : %.2f\n", result);


	// 문제 #2
	float num1 = 136.4f;
	float num2 = 37.11f;
	num1 = (int)num1 % 10;
	num2 = (int)num2 % 10;
	printf("num1 = %d\n", (int)num1);
	printf("num2 = %d\n", (int)num2);
	
	// 일의 자리 수만 변수로 저장해서 출력(10으로 나눈 나머지는 일의 자리수)

	// 문제 #3
	// 바구니가 몇개 필요할까
	// 바구니 한개에 복숭아 10개가 들어갑니다. 
	// 바구니가 몇개 필요한지 계산하는 코드를 만들어주세요.

	int 복숭아1 = 33;
	int 복숭아2 = 17;
	int 바구니1 = 복숭아1 / 10 + 1;
	int 바구니2 = 복숭아2 / 10 + 1;
	printf("복숭아1의 바구니 개수는 %d개, 복숭아2의 바구니 개수는 %d개 필요합니다.", 바구니1, 바구니2);

	/*
	float 바구니1 = ceil((float)복숭아1 / 10);
	float 바구니2 = ceil((float)복숭아2 / 10);
	printf("복숭아1의 바구니 개수는 %.f개, 복숭아2의 바구니 개수는 %.f개 필요합니다.", 바구니1, 바구니2);

	ceil 함수 사용 시 math.h 헤더함수 필요
	*/




}