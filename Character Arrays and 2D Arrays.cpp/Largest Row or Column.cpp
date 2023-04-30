/*
You can use minimum value of integer as -2147483647 and
maximum value of integer as 2147483647
*/
void findLargest(int **input, int nRows, int mCols)
{
    int rMax = 0, cMax = 0;
    int rIndex, cIndex;

    if (nRows == 0 && mCols == 0)
    {
        cout << "row 0 -2147483648";
        return;
    }
    for (int i = 0; i < nRows; i++)
    {
        int rSum = 0;
        for (int j = 0; j < mCols; j++)
        {
            rSum += input[i][j];
        }
        if (rSum > rMax)
        {
            rMax = rSum;
            rIndex = i;
        }
    }
    for (int i = 0; i < mCols; i++)
    {
        int cSum = 0;
        for (int j = 0; j < nRows; j++)
        {
            cSum += input[j][i];
        }
        if (cSum > cMax)
        {
            cMax = cSum;
            cIndex = i;
        }
    }

    if (rMax >= cMax)
        cout << "row " << rIndex << " " << rMax;
    else if (rMax < cMax)
        cout << "column " << cIndex << " " << cMax;
    else
        cout << "row 0 -2147483648";
}