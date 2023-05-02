#include <bits/stdc++.h>
// int maximum(BinaryTreeNode<int> *root)
// {
// 	if(root==NULL)return INT_MIN;
// 	else return max(root->data,max(maximum(root->left),maximum(root->right)));
// }
// int minimum(BinaryTreeNode<int> *root)
// {
// 	if(root==NULL)return INT_MAX;
// 	else return min(root->data,min(minimum(root->left),minimum(root->right)));
// }

// bool isBST(BinaryTreeNode<int> *root)
// {
// 	if(root==NULL)return 1;
// 	int leftMax=maximum(root->left);
// 	int rightMin=minimum(root->right);
// 	if(leftMax<root->data&&rightMin>=root->data&&isBST(root->left)&&isBST(root->right))return 1;
// 	else return 0;

// }
bool isbst(BinaryTreeNode<int> *root, int min, int max)
{
    if (root == NULL)
        return true;
    if (root->data < min || root->data > max)
        return false;
    bool isLeftOK = isbst(root->left, min, root->data - 1);
    bool isRightOK = isbst(root->right, root->data, max);
    return isLeftOK & isRightOK;
}
bool isBST(BinaryTreeNode<int> *root)
{
    return isbst(root, INT_MIN, INT_MAX);
}