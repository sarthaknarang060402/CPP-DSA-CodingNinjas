BinaryTreeNode<int> *builder(int *postorder, int *inorder, int inS, int inE, int poS, int poE)
{
    if (inE < inS)
        return NULL;
    int rootData = postorder[poE];
    int inroot;
    for (int i = inS; i <= inE; i++)
    {
        if (rootData == inorder[i])
        {
            inroot = i;
            break;
        }
    }
    int linS = inS;
    int linE = inroot - 1;
    int lpoS = poS;
    int lpoE = lpoS + linE - linS;
    int rinS = inroot + 1;
    int rinE = inE;
    int rpoS = lpoE + 1;
    int rpoE = poE - 1;
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    root->left = builder(postorder, inorder, linS, linE, lpoS, lpoE);
    root->right = builder(postorder, inorder, rinS, rinE, rpoS, rpoE);
    return root;
}
BinaryTreeNode<int> *buildTree(int *postorder, int postLength, int *inorder, int inLength)
{
    return builder(postorder, inorder, 0, inLength - 1, 0, postLength - 1);
}