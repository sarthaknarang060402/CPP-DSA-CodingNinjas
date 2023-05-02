template <typename T>
class myBoxclass
{
public:
    TreeNode<T> *lar;
    TreeNode<T> *slar;

    myBoxclass(TreeNode<T> *first, TreeNode<T> *second)
    {
        this->lar = first;
        this->slar = second;
    }
};
myBoxclass<int> *helper(TreeNode<int> *root)
{
    if (root == NULL)
        return new myBoxclass<int>(NULL, NULL);
    myBoxclass<int> *ans = new myBoxclass<int>(root, NULL);
    for (int i = 0; i < root->children.size(); i++)
    {
        myBoxclass<int> *boxChild = helper(root->children[i]);
        if (boxChild->lar->data > ans->lar->data)
        {
            if (boxChild->slar == NULL || boxChild->slar->data < ans->lar->data)
            {
                ans->slar = ans->lar;
                ans->lar = boxChild->lar;
            }
            else if (boxChild->slar->data > ans->lar->data)
                ans = boxChild;
        }
        else if (boxChild->lar->data < ans->lar->data)
        {
            if (ans->slar == NULL || boxChild->lar->data > ans->slar->data)
                ans->slar = boxChild->lar;
        }
    }
    return ans;
}
TreeNode<int> *getSecondLargestNode(TreeNode<int> *root)
{
    return helper(root)->slar;
}