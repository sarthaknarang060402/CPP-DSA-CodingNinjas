#include <iostream>
using namespace std;

void print2DArray(int **input, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int num = 0;
        while (num < row - i)
        {
            for (int j = 0; j < col; j++)
            {
                cout << input[i][j] << " ";
            }
            num++;
            cout << endl;
        }
    }
}