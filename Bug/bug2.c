#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//5x5 �迭��, 25ĭ�� ����.
	srand(time(NULL)); //������ ����
	int a[5][5] = { {0,}, }; //2���� �迭 �ʱ�ȭ
	int x = rand() % 5; //ó�� x��ǥ 
	int y = rand() % 5; //ó�� y��ǥ 
	a[x][y] = 1;
	printf("a�� ù ��ǥ�� %d, %d\n", x, y);
	while (1) //a�� x, y ��ǥ�� 0���� �������� ������ �ݺ�
	{
		int num = rand() % 8; //�̵��� ���� 0~7
		
		//0�̸� ���� 1ĭ
		if (num == 0) { x--; }
		else if (num == 1) { x--; y++; }
		else if (num == 2) { y++; }
		else if (num == 3) { x++; y++; }
		else if (num == 4) { x++; }
		else if (num == 5) { x++; y--; }
		else if (num == 6) { y--; }
		else if (num == 7) { x--; y--; }

		if (x < 0)		x = 0;
		else if (x > 4) x = 4;
		if (y < 0)		y = 0;
		else if (y > 4) y = 4;

		a[x][y]++;
		printf("��ǥ�� : %d, %d \n", x, y);

		//���� ���� ���ٰ� ������ ��� ���� �������� �������� ���������� �ҽ��ڵ�
		int count = 0;
		for (int i = 0; i < 5;i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (a[i][j] == 0)
					count++;
			}
		}
		if (count==0) {
			break;
		}
		
	}
	for (int i = 0; i < 5;i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}