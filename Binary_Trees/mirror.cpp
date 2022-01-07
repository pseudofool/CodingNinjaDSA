void mirrorBinaryTree(BinaryTreeNode<int>* root) {
    if (root == NULL){
        return;
    }
    mirrorBinaryTree(root->right);
    mirrorBinaryTree(root->left);
    BinaryTreeNode<int>* temp = root->left;
    root->left = root->right;
    root->right = temp;
}