TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    TreeNode<int>* max = root;
    for (int i=0; i<root->children.size(); i++){
        TreeNode<int>* tempMax = maxDataNode(root->children[i]);
        if (max->data < tempMax->data){
            max = tempMax;
        }
    }
    return max;
}