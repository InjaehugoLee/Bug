#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
#define IND 5

void print(int b[IND][IND]);
int check(int b[IND][IND]);

//return 0 ->
//return 1 -> all not zero

int main() {

    int a[IND][IND] = { {0,}, };

    srand(time(NULL));
    int tra = 0;
    int x = rand() % IND;
    int y = rand() % IND;

    a[x][y] = 0;

    while (1) {
        tra = rand() % 8;


        if (tra == 0)
            y--;

        else if (tra == 1)
        {
            x++;
            y--;
        }

        else if (tra == 2)
            x++;

        else if (tra == 3)
        {
            x++;
            y++;
        }
        else if (tra == 4)
            y++;

        else if (tra == 5)
        {
            x--;
            y++;
        }

        else if (tra == 6)
            x--;

        else if (tra == 7) {
            x--;
            y--;
        }


        if (x > IND - 1)
            x = IND - 1;
        else if (x < 0)
            x = 0;

        if (y > IND - 1)
            y = IND - 1;
        else if (y < 0)
            y = 0;

        a[x][y]++;   //a[x][y]++;

        print(a);

        if (check(a) == 1)
            break;

    }
    return 0;
}

void print(int b[IND][IND]) {


    system("cls");      //화면이 깜박이면서 배열의 칸에 숫자를 더한다.

    for (int i = 0; i < IND; i++) {
        for (int j = 0; j < IND; j++)
            printf("%3d", b[i][j]);
        cout << endl;
    }
}

int check(int b[IND][IND]) {


    for (int i = 0; i < IND; i++)
    {
        for (int j = 0; j < IND; j++) {
            if (b[i][j] == 0)         //배열의 원소 중 하나라도 0이 있으면 return 0
                return 0;
        }
    }
    //배열 원소가 모두 1이상이 되면 종료 
    return 1;
}