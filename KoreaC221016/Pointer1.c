#include <stdio.h>

int main1() {
	// 포인터 : 주소를 기억하는 자료형
	// 변수 : 값을 기억
	
	// 택시 -> 영희네 집
	// 컴퓨터 -> 변수1 -> 변수1의 주소
	
	// 변수는 값을 저장
	int num = 3;
	printf("%d\n", num);

	// 포인터는 주소를 저장
	int* p_num = &num;		// 앞에 & 기호를 붙이면 주소값으로 변경

	printf("%d\n", p_num);			
	printf("%d\n", &num);				// & 참조 (주소값)
	printf("%d\n", *p_num);				// 역참조 (주소로 찾아가서 안에 들어있는 값을 확인)
	

	// page 163
	char cnum = 5;
	int inum = 999;
	double dnum = 3.14;

	char* cptr = &cnum;
	int* iptr = &inum;
	double* dptr = &dnum;

	printf("%p\n", cptr);
	printf("%p\n", iptr);
	printf("%p\n", dptr);

	// 자료형 앞에 *를 붙이면 포인터변수 생성을 의미
	// 이미 생성된 변수명 앞에 *을 붙이면 역참조를 의미(*애스터리스크)
	// 변수명 앞에 &를 붙이면 주소참조를 의미(&앰퍼샌드)

	printf("결과는 %d\n", (*p_num) + 2); // *p_num == num
	(*p_num) += 4;				// num = num + 4
	printf("결과는 %d\n", *p_num);

	// page 166

	num = 10;
	int* pnum = &num;
	*pnum = 20;
	printf("num : %d\n", num);
	(*pnum)++; (*pnum)++;
	printf("num : %d\n", num);
	printf("*pnum : %d\n", *pnum);

	// page  168_1

	int a = 10;
	int* p = &a;
	*p = 20;
	printf("%d  ", a);
	*p = 50;
	printf("%d\n", a);
	
	// page 168_2

	int number = 10;
	int* pnumber = &number;
	printf("%d\n", *pnumber);
	printf("%d\n", pnumber);

	// page 169
	int* ptr;
	int num1 = 5;
	int num2 = 8;

	ptr = &num1;
	printf("%d\n", *ptr);

	ptr = &num2;
	printf("%d\n", *ptr);

	// page 170

	int n1 = 100, n2 = 200;
	int* ptr1 = &n1;
	int* ptr2 = &n2;

	printf("%d %d\n", *ptr1, *ptr2);

	int* ptr3 = &n1;
	ptr1 = ptr2;
	ptr2 = ptr3;


	printf("%d %d\n", *ptr1, *ptr2);




	return 0;
}