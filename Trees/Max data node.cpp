
TreeNode<int> *maxDataNode(TreeNode<int> *root)
{
    if (root == NULL)
        return NULL;
    // if(root->children.size()==0)return root;
    TreeNode<int> *maxnode = root;
    for (int i = 0; i < root->children.size(); i++)
    {
        TreeNode<int> *maxChild = maxDataNode(root->children[i]);
        if (maxChild->data > maxnode->data)
        {
            maxnode = maxChild;
        }
    }
    return maxnode;
}