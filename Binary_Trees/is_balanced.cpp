int height(BinaryTreeNode<int>* root) {
    if (root == NULL){
        return 0;
    }
    return 1 + max(height(root->left), height(root->right));
}

bool isBalanced(BinaryTreeNode<int> *root) {
	if (root == NULL){
        return true;
    }
    int lHeight = height(root->left);
    int rHeight = height(root->right);
    int diff = abs(lHeight - rHeight);
    if (diff <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return true;
    return false;
}