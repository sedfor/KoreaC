#include <stdio.h>

int main1() {
	// ������ : �ּҸ� ����ϴ� �ڷ���
	// ���� : ���� ���
	
	// �ý� -> ����� ��
	// ��ǻ�� -> ����1 -> ����1�� �ּ�
	
	// ������ ���� ����
	int num = 3;
	printf("%d\n", num);

	// �����ʹ� �ּҸ� ����
	int* p_num = &num;		// �տ� & ��ȣ�� ���̸� �ּҰ����� ����

	printf("%d\n", p_num);			
	printf("%d\n", &num);				// & ���� (�ּҰ�)
	printf("%d\n", *p_num);				// ������ (�ּҷ� ã�ư��� �ȿ� ����ִ� ���� Ȯ��)
	

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

	// �ڷ��� �տ� *�� ���̸� �����ͺ��� ������ �ǹ�
	// �̹� ������ ������ �տ� *�� ���̸� �������� �ǹ�(*�ֽ��͸���ũ)
	// ������ �տ� &�� ���̸� �ּ������� �ǹ�(&���ۻ���)

	printf("����� %d\n", (*p_num) + 2); // *p_num == num
	(*p_num) += 4;				// num = num + 4
	printf("����� %d\n", *p_num);

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