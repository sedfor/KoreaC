#include <stdio.h>

void main10() {

	// type : �ڷ���
	// �ڷ��� : char, int, float, ....
	
	// �ڷ����� �� ����� �ϳ�?
	// �������� �Ǽ��� �����Ϸ�(Visual Studio)�� �ν��ؼ� �����ϱ� ����
	// �������� �ǵ��� ��Ȯȭ
	
	// printf("12-3\n");					// ��ǻ�ʹ� 9�� �������, 12-3���� ������� �� ���� ����
	
	char phone[] = "010-4163-7597";			// ���ڿ�[] - 1ĭ * ���� ���� ���� ����+1
	char aa = 'A';							// ���� - 1ĭ

	short num3 = 12;						// 2ĭ¥�� ����
	int num1 = 123;							// ����(����) - 4ĭ
	long long num33 = 12345678;				// 8ĭ¥�� ����(����)

	float num2 = 3.14f;						// �Ҽ��� �ִ� ����(�Ǽ�) - 4ĭ
	double num22 = 3.14;					// 8ĭ �Ҽ����ִ� ����(�Ǽ�)

	printf("%d\n", num1);
	printf("%d\n", (int)sizeof(aa));
	printf("%d\n", (int)sizeof(num1));
	printf("%lld\n", sizeof(num2));
	printf("%d\n", (int)sizeof(phone));
	printf("%d\n\n\n\n", sizeof(num33));


	// page 45(2)
	printf("%d\n", (int)sizeof(int));
	printf("%d\n", (int)sizeof(char));
	printf("%d\n", (int)sizeof(short));
	printf("%d\n", (int)sizeof(50));
	printf("%d\n", (int)sizeof(float));
	printf("%d\n\n\n\n\n", (int)sizeof(3.14f));

	// �Ҽ��� �ִ� ���� �ڿ� f�� ���̸� float -4ĭ
	// �Ҽ��� �ִ� ���� �ڿ� �ƹ��͵� �Ⱥ��̸� double - 8ĭ
	
	// page 45(3)

	float f = 3.14f;
	int number = 3;

	// �ڷ��� ��ȯ : ������ ���¸� �ٲ�
	// ���� -> �Ҽ��� �ִ� ����
	// ���� -> ����
	// �Ҽ��� �ִ� ���� -> �Ҽ��� ���� ����

	// �ڷ����� �ٲٴ� ��� : ���� �տ� �Ұ�ȣ�� ���� ���ϴ� �ڷ����� ���´�.

	printf("%d\n", (int)f);
	printf("%f\n", (float)number);



























}