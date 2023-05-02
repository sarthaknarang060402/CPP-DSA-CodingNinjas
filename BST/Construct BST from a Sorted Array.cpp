BinaryTreeNode<int> *constructTreeHelper(int *input, int si, int ei)
{
    if (si > ei)
        return NULL;
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(input[(si + ei) / 2]);
    BinaryTreeNode<int> *leftChild = constructTreeHelper(input, si, ((si + ei) / 2) - 1);
    BinaryTreeNode<int> *rightChild = constructTreeHelper(input, ((si + ei) / 2) + 1, ei);
    root->left = leftChild;
    root->right = rightChild;
    return root;
}
BinaryTreeNode<int> *constructTree(int *input, int n)
{
    return constructTreeHelper(input, 0, n - 1);
}