bool isPresent(BinaryTreeNode<int> *root, int value)
{
    if (root == NULL)
        return 0;
    if (root->data == value)
        return 1;

    return isPresent(root->left, value) || isPresent(root->right, value);
}
int getLCA(BinaryTreeNode<int> *root, int a, int b)
{
    if (isPresent(root, a) && !isPresent(root, b))
        return a;
    else if (isPresent(root, b) && !isPresent(root, a))
        return b;
    else if (!isPresent(root, a) && !isPresent(root, b))
        return -1;

    int ans = root->data;
    if (isPresent(root->left, a) && isPresent(root->left, b))
        ans = getLCA(root->left, a, b);
    else if (isPresent(root->right, a) && isPresent(root->right, b))
        ans = getLCA(root->right, a, b);

    return ans;
}