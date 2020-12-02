#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	srand((unsigned int)time(NULL));
	int a[5][5] = { {0,}, }; //2차원 배열 초기화
	int x = rand() % 5; //처음 x좌표 
	int y = rand() % 5; //처음 y좌표 
	a[x][y] = 1;
	printf("a의 첫 좌표는 %d, %d\n", x, y);
	while (a[x][y]!=0) //a의 x, y 좌표가 0으로 남아있을 때까지 반복
	{	
		int num = rand()%7; //이동할 방향 0~7
		
		//0이면 위로 1칸
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
		printf("다음 좌표 : \n", x, y);

	
	}
	return 0;
}

