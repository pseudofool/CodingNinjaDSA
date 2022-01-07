bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    if (root == NULL){
        return false;
    }
    if (root->data == x){
        return true;
    }
    // bool checkLeft = isNodePresent(root->left);
    // bool checkRight = isNodePresent(root->right);
    return isNodePresent(root->left, x) || isNodePresent(root->right, x);
    
}