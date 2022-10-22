#include <stdio.h>

// 함수 : 코드를 저장하는 기술(입력값, 반환값)
// 숫자 2개를 받아서 더한다음 돌려주는 기능(함수)
// int : 반환할 값의 자료형
// add : 함수의 이름
// () : ()를 갖고 있으면 함수, (예외 if, switch, for, while), 해당 함수를 사용하는 곳에서 넘겨줄 값을 저장
int MyAdd(int num1, int num2)			// 숫자 2개를 받을거니까 정수형 변수 2개를 매개변수로 놓음
{
	int sum = 0;
	sum = num1 + num2;				// 받은 숫자 2개를 더해서 sum에 저장

	return sum;						// 함수를 사용하는 곳에 sum값을 돌려줌 (반환값)
}

// void : 비어있다, 없다,,, return 안해도 됨
float MyDiv(int cm)
{	
	float result = (float)cm / 100;

	return result;					// result에 담긴 값을 사용한 곳에 돌려줌
}

int TotalPrint(int num1, int num2)
{
	int total = 0;
	for (int i =num1+ 1; i < num2; i++) {
		total += i;
	}

	return total;
}

int Count7(int num)
{
	int count = 0;
	for (int i = num; i < num + 200; i++) {
		if (i % 7 == 0)		// 7의 배수다
		{
			count++;
		}
	}
	return count;
}

void GetTime(int sec) 
{
	int hour = 0;
	int minute = 0;
	int second = 0;
	// 시간은 초를 3600으로 나눈 값
	// 분은 초를 3600으로 나눈 나머지를 60으로 나눈 값
	// 초는 60으로 나눈 나머지
	hour = sec / 3600;
	minute = (sec % 3600) / 60;
	second = sec % 60;
	printf("%d시간/%d분/%d초", hour, minute, second);

}

// main 함수
int main0() {

	int result = 1 + 2;				// 1과 2가 더해지면서 3이 되어 result에 저장됨
	int result2 = MyAdd(1, 2);		// 1과 2가 더해지면서 3이 되어 result2에 저장됨

	// 사용자가 직접 만드는 기능이면서 코드를 저장하기 위한 기술을 함수()
	// 함수를 사용하는 법 : 함수이름();
	// 함수를 만드는 법 : 함수이름(){}
	int i_height = 0;
	float f_height = 0.0f;
	printf("키를 cm 단위로 입력하세요 : ");
	scanf_s("%d", &i_height);		// scanf_s : scanf를 대체해서 만들어진 함수(입력받기)
	f_height = MyDiv(i_height);		// cm를 MyDiv 함수에 전달하고 그 결과값을 f_height에 저장
	printf("결과 : %.2fm\n", f_height);

	// #2
	int num1 = 5, num2 = 9;
	int result1 = TotalPrint(num1,num2);
	printf("%d와 %d 사이의 정수의 총합은 : %d\n", num1, num2, result1);

	// #3
	// 한개의 정수를 매개변수로 받아서 그 수보다 200 더 큰 정수 사이의 7의 배수가 몇개인가?
	int num = 100;		// 100 ~ 300 사이의 7의 베수의 갯수
	int result3 = Count7(num);
	printf("%d와 %d사이 7의 배수는 %d개입니다\n", num, num + 200, result3);


	// #5
	// 초를 입력(int) --> 시/분/초 출력

	int second = 0;
	printf("몇 초 : ");
	scanf_s("%d", &second);
	GetTime(second);


	return 0;
}