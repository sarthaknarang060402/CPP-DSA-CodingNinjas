void elementsInRangeK1K2(BinaryTreeNode<int> *root, int k1, int k2)
{
    if (root == NULL)
        return;
    if (root->data <= k2 && root->data >= k1)
    {
        elementsInRangeK1K2(root->left, k1, k2);
        cout << root->data << " ";
        elementsInRangeK1K2(root->right, k1, k2);
    }
    if (root->data > k2)
        elementsInRangeK1K2(root->left, k1, k2);
    if (root->data < k1)
        elementsInRangeK1K2(root->right, k1, k2);
}