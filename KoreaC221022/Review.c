#include <stdio.h>

// �Լ� : �ڵ带 �����ϴ� ���(�Է°�, ��ȯ��)
// ���� 2���� �޾Ƽ� ���Ѵ��� �����ִ� ���(�Լ�)
// int : ��ȯ�� ���� �ڷ���
// add : �Լ��� �̸�
// () : ()�� ���� ������ �Լ�, (���� if, switch, for, while), �ش� �Լ��� ����ϴ� ������ �Ѱ��� ���� ����
int MyAdd(int num1, int num2)			// ���� 2���� �����Ŵϱ� ������ ���� 2���� �Ű������� ����
{
	int sum = 0;
	sum = num1 + num2;				// ���� ���� 2���� ���ؼ� sum�� ����

	return sum;						// �Լ��� ����ϴ� ���� sum���� ������ (��ȯ��)
}

// void : ����ִ�, ����,,, return ���ص� ��
float MyDiv(int cm)
{	
	float result = (float)cm / 100;

	return result;					// result�� ��� ���� ����� ���� ������
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
		if (i % 7 == 0)		// 7�� �����
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
	// �ð��� �ʸ� 3600���� ���� ��
	// ���� �ʸ� 3600���� ���� �������� 60���� ���� ��
	// �ʴ� 60���� ���� ������
	hour = sec / 3600;
	minute = (sec % 3600) / 60;
	second = sec % 60;
	printf("%d�ð�/%d��/%d��", hour, minute, second);

}

// main �Լ�
int main0() {

	int result = 1 + 2;				// 1�� 2�� �������鼭 3�� �Ǿ� result�� �����
	int result2 = MyAdd(1, 2);		// 1�� 2�� �������鼭 3�� �Ǿ� result2�� �����

	// ����ڰ� ���� ����� ����̸鼭 �ڵ带 �����ϱ� ���� ����� �Լ�()
	// �Լ��� ����ϴ� �� : �Լ��̸�();
	// �Լ��� ����� �� : �Լ��̸�(){}
	int i_height = 0;
	float f_height = 0.0f;
	printf("Ű�� cm ������ �Է��ϼ��� : ");
	scanf_s("%d", &i_height);		// scanf_s : scanf�� ��ü�ؼ� ������� �Լ�(�Է¹ޱ�)
	f_height = MyDiv(i_height);		// cm�� MyDiv �Լ��� �����ϰ� �� ������� f_height�� ����
	printf("��� : %.2fm\n", f_height);

	// #2
	int num1 = 5, num2 = 9;
	int result1 = TotalPrint(num1,num2);
	printf("%d�� %d ������ ������ ������ : %d\n", num1, num2, result1);

	// #3
	// �Ѱ��� ������ �Ű������� �޾Ƽ� �� ������ 200 �� ū ���� ������ 7�� ����� ��ΰ�?
	int num = 100;		// 100 ~ 300 ������ 7�� ������ ����
	int result3 = Count7(num);
	printf("%d�� %d���� 7�� ����� %d���Դϴ�\n", num, num + 200, result3);


	// #5
	// �ʸ� �Է�(int) --> ��/��/�� ���

	int second = 0;
	printf("�� �� : ");
	scanf_s("%d", &second);
	GetTime(second);


	return 0;
}