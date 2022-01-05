int getHeight(TreeNode<int>* root) {
    // let the maximum height among the children is zero
    int height = 0;
    for (int i=0; i<root->children.size(); i++){
        // checking for maximum height
        int subHeight = getHeight(root->children[i]);
        if (subHeight > height){
            height = subHeight;
        }
    }
    // 1 added for root node
    return height + 1;
}