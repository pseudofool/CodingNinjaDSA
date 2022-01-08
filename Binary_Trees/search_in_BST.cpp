bool searchInBST(BinaryTreeNode<int> *root , int k) {
	if (root == NULL)
        return false;
	if (root->data == k){
        return true;
    }
    bool checkRight, checkLeft;
    if (k > root->data){
        checkRight = searchInBST(root->right, k);
    }
    if (k < root->data){
        checkLeft = searchInBST(root->left, k);
    }
    return checkLeft || checkRight;
}