void preOrder(BinaryTreeNode<int> *root) {
    if (root == NULL)
        return;
	cout << root->data <<" ";
    // if (root->left != NULL)
    	preOrder(root->left);
    // if (root->right != NULL)
    	preOrder(root->right);
}

void postOrder(BinaryTreeNode<int> *root) {
	if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void inOrder(BinaryTreeNode<int>* root){
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data;
    inOrder(root->right); 
}
