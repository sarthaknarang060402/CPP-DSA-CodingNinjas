void spiralPrint(int **input, int nRows, int nCols)
{
    int count = 0;
    int rstart = 0, rend = nRows - 1, cstart = 0, cend = nCols - 1;
    while (count != nRows * nCols)
    {
        // left to right
        int i = rstart;
        for (int j = cstart; j <= cend; j++)
        {
            cout << input[i][j] << " ";
            count++;
        }
        rstart++;
        if (count == nRows * nCols)
            break;

        // top to bottom
        int j = cend;
        for (int i = rstart; i <= rend; i++)
        {
            cout << input[i][j] << " ";
            count++;
        }
        cend--;
        if (count == nRows * nCols)
            break;

        // right to left
        i = rend;
        for (int j = cend; j >= cstart; j--)
        {
            cout << input[i][j] << " ";
            count++;
        }
        rend--;
        if (count == nRows * nCols)
            break;

        // bottom to up
        j = cstart;
        for (int i = rend; i >= rstart; i--)
        {
            cout << input[i][j] << " ";
            count++;
        }
        cstart++;
        if (count == nRows * nCols)
            break;
    }
}