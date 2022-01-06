TODO
// dry run

bool isPresent(TreeNode<int>* root, int x) {
    //edge case
	if (root == NULL){
        return false;
    }
    // base case
    if (root->data == x){
        return true;
    }
    for (int i=0; i<root->children.size(); i++){
        bool temp = isPresent(root->children[i], x);
        if (temp)
            return true;
    }
    return false;
}