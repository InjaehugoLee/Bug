#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	srand((unsigned int)time(NULL));
	int a[5][5] = { {0,}, }; //2���� �迭 �ʱ�ȭ
	int x = rand() % 5; //ó�� x��ǥ 
	int y = rand() % 5; //ó�� y��ǥ 
	a[x][y] = 1;
	printf("a�� ù ��ǥ�� %d, %d\n", x, y);
	while (a[x][y]!=0) //a�� x, y ��ǥ�� 0���� �������� ������ �ݺ�
	{	
		int num = rand()%7; //�̵��� ���� 0~7
		
		//0�̸� ���� 1ĭ
		if (num == 0)
		{	
			x = x - 1;
			y = y;
		}
		else if (num == 1)
		{
			x = x - 1;
			y = y + 1;
		}
		else if (num == 2)
		{
			x = x;
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
			y = y;		
		}
		else if (num == 5)
		{
			x = x + 1;
			y = y - 1;
		}
		else if (num == 6)
		{
			x = x;
			y = y - 1;
		}
		else
		{
			x = x - 1;
			y = y - 1;
		}
		a[x][y] = 1;
		printf("���� ��ǥ : \n", x, y);

	
	}
	return 0;
}

