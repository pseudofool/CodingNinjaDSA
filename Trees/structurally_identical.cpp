bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    // checking for roots values and their nums of children
    if (root1->data != root2->data || root1->children.size()!=root2->children.size()){
        return false;
    }
    for (int i=0; i<root1->children.size(); i++){
        // recursive call on thier children
        bool ans = areIdentical(root1->children[i], root2->children[i]);
        if (!ans){
            return false;
        }
    }
    return true;
}