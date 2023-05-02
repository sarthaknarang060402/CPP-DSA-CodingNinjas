int sumCalculator(TreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    int sum = root->data;
    for (int i = 0; i < root->children.size(); i++)
    {
        sum += root->children[i]->data;
    }
    return sum;
}
TreeNode<int> *maxSumNode(TreeNode<int> *root)
{
    if (root == NULL)
        return NULL;
    TreeNode<int> *maxNode = root;
    int sum = sumCalculator(root);
    for (int i = 0; i < root->children.size(); i++)
    {
        TreeNode<int> *maxChild = maxSumNode(root->children[i]);
        int childSum = sumCalculator(root->children[i]);
        if (sum < childSum)
        {
            maxNode = maxChild;
            sum = childSum;
        }
    }
    return maxNode;
}