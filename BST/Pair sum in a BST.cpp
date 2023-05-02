
#include <bits/stdc++.h>
vector<int> values;
void appender(int data)
{
    values.push_back(data);
}
void printpairs(int sum)
{
    for (int i = 0, j = values.size() - 1; i < j;)
    {
        int total = values[i] + values[j];
        if (total == sum)
        {
            cout << values[i++] << " " << values[j--] << endl;
        }
        else if (total > sum)
            j--;
        else
            i++;
    }
}
void printNodesSumToS(BinaryTreeNode<int> *root, int sum)
{
    static const BinaryTreeNode<int> *originalroot = root;
    if (root == NULL)
        return;
    appender(root->data);
    printNodesSumToS(root->left, sum);
    printNodesSumToS(root->right, sum);
    if (root == originalroot)
    {
        sort(values.begin(), values.end());
        printpairs(sum);
    }
}