void wavePrint(int **input, int nRows, int mCols)
{

    for (int j = 0; j < mCols; j++)
    {
        for (int i = 0; i < nRows; i++)
        {
            cout << input[i][j] << " ";
        }
        j++;
        if (j < mCols)
        {
            for (int i = nRows - 1; i >= 0; i--)
            {
                cout << input[i][j] << " ";
            }
        }
    }
}