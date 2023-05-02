int height(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return 0;

    return 1 + max(height(root->left), height(root->right));
}
vector<int> *longestPath(BinaryTreeNode<int> *root)
{
    if (root->left == NULL && root->right == NULL)
    {
        vector<int> *answer = new vector<int>();
        answer->push_back(root->data);
        return answer;
    }

    if (height(root->left) > height(root->right))
    {
        vector<int> *answer = longestPath(root->left);
        answer->push_back(root->data);
        return answer;
    }
    else
    {
        vector<int> *answer = longestPath(root->right);
        answer->push_back(root->data);
        return answer;
    }
}