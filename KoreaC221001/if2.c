#include <stdio.h>

void main123() {

	// Ȧ���� Ȧ��
	// ¦���� ¦��
	//int num = 0;

	//// ���ǹ� if(){}
	//// �Ұ�ȣ �ȿ� ������ ������ {}�� �����ϰ�
	//// �Ұ�ȣ �ȿ� ������ Ʋ���� {}�� �����Ѵ�
	//// ()�ȿ��� ������ ����, {}�ȿ��� ������ �������� ������ �ڵ带 ���´�
	//if (num % 2 == 0) {
	//	printf("¦��\n");

	//}

	//// num %2 == 1�� ������
	//if (num % 2 == 1) {
	//	// ����
	//	printf("Ȧ��\n");
	//}

	//���� 105 page

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
	//	printf("����");
	//}
	//else {
	//	printf("�̼�����");
	//}

	// 10���� ������ ���
	// 10 ~ 19 �̸� 10��
	// 20 ~ 29 �̸� 20��
	// 30 ~ 39 �̸� 30��
	// ��Ÿ

	if (age < 10) {
		printf("���");
	}
	else if (age < 20) {
		printf("10��");
	}
	else if (age < 30) {
		printf("20��");
	}
	else if (age < 40) {
		printf("30��");
	}
	else {
		printf("��Ÿ");
	}


	}
