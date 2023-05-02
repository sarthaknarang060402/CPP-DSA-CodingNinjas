#include <bits/stdc++.h>
class BSTnode
{
public:
    bool isBST;
    int height;
    int min;
    int max;
};

BSTnode LargestBST(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        BSTnode ans;
        ans.min = INT_MAX;
        ans.max = INT_MIN;
        ans.height = 0;
        ans.isBST = 1;
        return ans;
    }
    BSTnode leftnode = LargestBST(root->left);
    BSTnode rightnode = LargestBST(root->right);

    int minimum = min(root->data, min(leftnode.min, rightnode.min));
    int maximum = max(root->data, max(leftnode.max, rightnode.max));
    bool isrootBST = (root->data > leftnode.max) && (root->data < rightnode.min) && leftnode.isBST && rightnode.isBST;

    BSTnode ans;
    ans.min = minimum;
    ans.max = maximum;
    ans.isBST = isrootBST;
    if (isrootBST)
    {
        ans.height = max(leftnode.height, rightnode.height) + 1;
    }
    else
        ans.height = max(leftnode.height, rightnode.height);
    return ans;
}

int largestBSTSubtree(BinaryTreeNode<int> *root)
{
    return LargestBST(root).height;
}