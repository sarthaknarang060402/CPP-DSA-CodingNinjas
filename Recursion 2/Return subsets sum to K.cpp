

int subsetSumToK(int input[], int n, int output[][50], int k)
{
    // Write your code here
    if (n == 0)
    {
        if (k == 0)
        {
            output[0][0] = 0;
            return 1;
        }
        else
            return 0;
    }

    int smallOutput1 = subsetSumToK(input + 1, n - 1, output, k);
    int smallOutput2 = subsetSumToK(input + 1, n - 1, output + smallOutput1, k - input[0]);

    int smallOutputSize = smallOutput1 + smallOutput2;
    for (int i = smallOutput1; i < smallOutputSize; i++)
    {
        for (int j = output[i][0]; j > 0; j--)
        {
            output[i][j + 1] = output[i][j];
        }
        output[i][1] = input[0];
        output[i][0]++;
    }
    return smallOutputSize;
}
