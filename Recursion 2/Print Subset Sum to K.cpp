void subu(int input[], int size, int output[], int k, int outindx)
{
    if (k == 0)
    {
        for (int i = 0; i < outindx; i++)
        {
            cout << output[i];
            if (i != outindx - 1)
                cout << " ";
        }
        cout << endl;
        return;
    }
    if (size == 0)
        return;
    subu(input + 1, size - 1, output, k, outindx);
    output[outindx] = input[0];
    subu(input + 1, size - 1, output, k - input[0], outindx + 1);
}

void printSubsetSumToK(int input[], int size, int k)
{
    int *output = new int[size];
    subu(input, size, output, k, 0);
    delete[] output;
    return;
}
