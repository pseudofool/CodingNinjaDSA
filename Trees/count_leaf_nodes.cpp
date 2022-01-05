int getLeafNodeCount(TreeNode<int>* root) {
    //edge case
    if (root == NULL){
        return 0;
    }
    // chekcing if root is leaf node
    if (root->children.size() == 0){
        return 1;
    }
    int ans=0;
    for (int i=0; i<root->children.size(); i++){
        ans += getLeafNodeCount(root->children[i]);
    }
    return ans;
    
}