#include <stdio.h>

void main(){
	//char alpha;
	
	/*
	sanf ���� ����!
	char a[100];
	char b;
	���ڿ��� & ���� ����
	scanf("%s",a);

	����(%c)�� �Է¹ޱ� ���� �������� (���׹߻� ����)
	rewind(stdin);
	scanf("%c", &b);
	scanf("%d", &d);
	scanf("%f", &f);
	*/

	//(void) scanf("%c", &alpha);

	//if (alpha == 'A') {
	//	printf("alpha is A\n");
	//	printf("I like apple.");
	//	}
	//else if (alpha == 'B') {
	//	printf("alpha is B\n");
	//	printf("I like Banana.");
	//}
	//else if (alpha == 'C') {
	//	printf("alpha is C\n");
	//	printf("I like carrot.");
	//}
	//else {
	//	printf("I hate fruit & vegetable");
	//}



	int num;
	printf("input your number : ");
	scanf("%d", &num);

	if (num == 2) {
		printf("your number is 2");
		}
	else if (num == 4) {
		printf("your number is 4");
	}
	else if (num == 8) {
		printf("your number is 8");
	}

}