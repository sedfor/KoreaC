#include <stdio.h>

int main6() {

	// ������ �迭(�����Ͱ��� �����ϴ� �迭)
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;
	int* p_num1 = &num1;
	int* p_num2 = &num2;
	int* p_num3 = &num3;

	int num[3] = { num1, num2, num3 };		// ������ ����ִ� �迭
	int* p_num[3]= {p_num1,p_num2,p_num3};	// �ּҸ� ����ִ� �迭

	int n1 = 3, n2 = 6, n3 = 9;


	int* ptr1 = &n1;
	int* ptr2 = &n2;
	int* ptr3 = &n3;

	int* parr[3] = { ptr1, ptr2, ptr3 };

	printf("%d %d %d\n", *parr[0], *parr[1], *parr[2]);
	printf("%p %p %p\n", parr[0], parr[1], parr[2]);


	int arr[5] = { 10,20,30,40,50 };
	int* arr_ptr = arr;
	printf("%d %d %d %d %d\n", *arr_ptr, *(arr_ptr + 1), *(arr_ptr + 2), *(arr_ptr + 3), *(arr_ptr + 4));


	/*int arr1[8] = { 1,2,3,4,5,6,7,8 };
	int* arr1_ptr = &(arr1[8]);
	for (*arr1_ptr; *arr1_ptr / 2 == 1; *arr1_ptr--) {
		printf("�迭 ��� �� Ȧ���� ������ : %d",)
	}*/


	return 0;
}