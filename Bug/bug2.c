#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//5x5 배열로, 25칸을 만듦.
	srand(time(NULL)); //난수를 생성
	int a[5][5] = { {0,}, }; //2차원 배열 초기화
	int x = rand() % 5; //처음 x좌표 
	int y = rand() % 5; //처음 y좌표 
	a[x][y] = 1;
	printf("a의 첫 좌표는 %d, %d\n", x, y);
	while (1) //a의 x, y 좌표가 0으로 남아있을 때까지 반복
	{
		int num = rand() % 8; //이동할 방향 0~7
		
		//0이면 위로 1칸
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
		printf("좌표는 : %d, %d \n", x, y);

		//무한 루프 돌다가 벌레가 모든 곳을 지나가면 루프문을 빠져나오는 소스코드
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