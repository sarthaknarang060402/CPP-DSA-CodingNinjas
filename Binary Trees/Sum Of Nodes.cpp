int getSum(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    return root->data + getSum(root->left) + getSum(root->right);
}