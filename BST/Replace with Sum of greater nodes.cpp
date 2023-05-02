int replaceWithLargerNodesSumHelper(BinaryTreeNode<int> *root, int sum)
{
    if (root == NULL)
        return 0;
    if (root->right == NULL)
        return sum = root->data;
    root->data += replaceWithLargerNodesSumHelper(root->right, sum);
    root->left->data += sum;
}
void replaceWithLargerNodesSum(BinaryTreeNode<int> *root)
{
    replaceWithLargerNodesSumHelper(root, 0);
}