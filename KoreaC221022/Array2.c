#include <stdio.h>

int main() {
//	int i, j;
//	int arr[2][3] ={
//	{ 1,2,3 },
//	{ 4,5,6 }
//};
//
//	for (i = 0; i < 2; i++) {
//		for (j = 0; j < 3; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	for (i = 0; i < 2; i++) {
//		for (j = 0; j < 3; j++) {
//			arr[i][j] = 10;
//		}
//	}
//	for (i = 0; i < 2; i++) {
//		for (j = 0; j < 3; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}

	/*int arr[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	int i, j;

	int(*arrptr)[3] = arr;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", arrptr[i][j]);
		}
		printf("\n");
		}*/

	char bingo[3][3];
	bingo[0][0] = 'O';
	bingo[0][1] = 'X';
	bingo[0][2] = 'X';
	bingo[1][0] = 'X';
	bingo[1][1] = 'O';
	bingo[1][2] = 'X';
	bingo[2][0] = 'X';
	bingo[2][1] = 'X';
	bingo[2][2] = 'O';
	
	int i, j;


	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (i == j) {
				bingo[i][j] = 'O';
			}
			else {
				bingo[i][j] = 'X';
			}
		}
		

	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%c ", bingo[i][j]);
		}
		printf("\n");
	
	}



	// ������ �迭
	// �迭�� ���� ��⵵ ������ �ּҵ� ���� �� �ִ�
	
	return 0;

}