// time complexity O(n2)

int height(BinaryTreeNode<int>* root) {
    if (root == NULL){
        return 0;
    }
    return 1 + max(height(root->left), height(root->right));
}

int diameter(){
    if (root == NULL){
        return 0;
    }
    int option1 = height(root->left) + height(root->right);
    int option2 = diameter(root->left);
    int option2 = diameter(root->right);
}