class BST {
    BinaryTreeNode<int>* root;
   public:
    BST() { 
        root==NULL;
    }
    ~BST()
    {
        delete root;
    }
	/*----------------- Public Functions of BST -----------------*/
    private:
    BinaryTreeNode<int>* remove(BinaryTreeNode<int>* root,int data) { 
        if(root==NULL)return root;
        if(data > root->data)
        {
            root->right = remove(root->right,data);
            return root;
        }
        else if( data < root->data)
        {
            root->left = remove(root->left,data);
            return root;
        }
        else {
            if(root->left == NULL && root->right == NULL)
            {
                delete root;
                return NULL;
            }
            else if(root->left==NULL)
            {
                BinaryTreeNode<int>* temp = root->right;
                root->right = NULL;
                delete root;
                return temp;
            }
            else if(root->right==NULL)
            {
                BinaryTreeNode<int>* temp = root->left;
                root->left = NULL;
                delete root;
                return temp;
            }
            else{
                BinaryTreeNode<int>* minNode= root->right;
                while(minNode->left)minNode=minNode->left;
                int rightMin = minNode->data;
                root->data = rightMin;
                root->right = remove(root->right,rightMin);
                return root;
            }
        }
    }
    void print(BinaryTreeNode<int>* root) { 
        if(root==NULL)return;
        cout<<root->data<<":";
        if(root->left)cout<<"L:"<<root->left->data<<",";
        if(root->right)cout<<"R:"<<root->right->data;
        cout<<endl;
        print(root->left);
        print(root->right);
    }
    BinaryTreeNode<int>* insert(BinaryTreeNode<int>* root,int data) { 
        if(root==NULL)return new BinaryTreeNode<int>(data);
        if(root->data<data)root->right = insert(root->right,data);
        else  root->left = insert(root->left,data);
        return root;
    }
    bool search(BinaryTreeNode<int>* root,int data) {
		if(root==NULL)return false;
        if(root->data==data)return true;
        else if(root->data<data)return search(root->right,data);
        else return search(root->left,data);
    }
    public:
    void remove(int data) { 
        root=remove(root,data);
    }
    void print() { 
        print(root);
    }
    void insert(int data) { 
        root=insert(root,data);
    }
    bool search(int data) {
		return search(root,data);
    }
};
