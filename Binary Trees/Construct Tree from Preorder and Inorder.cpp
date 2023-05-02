BinaryTreeNode<int> *builder(int *preo, int *ino, int inS, int inE, int prS, int prE)
{
    if (inE < inS)
        return NULL;
    int rootData = preo[prS];
    int rootInorder;
    for (int i = inS; i <= inE; i++)
    {
        if (ino[i] == rootData)
        {
            rootInorder = i;
            break;
        }
    }
    int linS = inS;
    int linE = rootInorder - 1;
    int lprS = prS + 1;
    int lprE = linE - linS + lprS;
    int rinS = rootInorder + 1;
    int rinE = inE;
    int rprS = lprE + 1;
    int rprE = prE;
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    root->left = builder(preo, ino, linS, linE, lprS, lprE);
    root->right = builder(preo, ino, rinS, rinE, rprS, rprE);
    return root;
}
BinaryTreeNode<int> *buildTree(int *preo, int preLen, int *ino, int inLen)
{
    return builder(preo, ino, 0, preLen - 1, 0, inLen - 1);
}