void replaceWithDepthHelper(TreeNode<int> *root, int depth)
{
    root->data = depth;
    for (int i = 0; i < root->children.size(); i++)
    {
        replaceWithDepthHelper(root->children[i], depth + 1);
    }
}
void replaceWithDepthValue(TreeNode<int> *root)
{
    replaceWithDepthHelper(root, 0);
}