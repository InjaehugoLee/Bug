#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
int check(int[5][5]);
void print();
int main() 
{
	srand((unsigned int)time(NULL)); //������ ����
	int a[5][5] = { {0,}, }; //2���� �迭 �ʱ�ȭ
	int x = rand() % 5; //ó�� x��ǥ 
	int y = rand() % 5; //ó�� y��ǥ 
	a[x][y] = 1;
	printf("a�� ù ��ǥ�� %d, %d\n", x, y);
	while (check(a) == 0) //a�� x, y ��ǥ�� 0���� �������� ������ �ݺ�
	{
		int num = rand() % 8; //�̵��� ���� 0~7

		//0�̸� ���� 1ĭ
		if (num == 0)
		{
			x = x - 1;
		}
		else if (num == 1)
		{
			x = x - 1;
			y = y + 1;
		}
		else if (num == 2)
		{
			y = y + 1;
		}
		else if (num == 3)
		{
			x = x + 1;
			y = y + 1;
		}
		else if (num == 4)
		{
			x = x + 1;
		}
		else if (num == 5)
		{
			x = x + 1;
			y = y - 1;
		}
		else if (num == 6)
		{
			y = y - 1;
		}
		else if (num == 7)
		{
			x = x - 1;
			y = y - 1;
		}

		if (x < 0) {
			x = 0;
		}
		else if (x > 4) {
			x = 4;
		}
		if (y < 0) {
			y = 0;
		}
		else if (y > 4) {
			y = 4;
		}
		a[x][y]++;
		print(a);
	}
}

int check(int b[5][5])
{
	for (int i = 0; i < 5;i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (b[i][j] == 0)
				return 0;
		}
	}
	return 1;
}

void print(int b[5][5]) 
{
	for (int i = 0; i < 5;i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%3d", b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}