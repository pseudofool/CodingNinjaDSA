TODO
// pair approach

TreeNode<int>* maxSumNode(TreeNode<int>* root) {
	if (root == NULL){
        return 0;
    }
    
    //let the root be the ans with sum stored in 'sum'
    TreeNode<int>* ans = root;
    int sum = root->data;
    for (int i = 0; i<root->children.size(); i++){
        sum += root->children[i]->data;
    }
    
    
    for (int i=0; i<root->children.size(); i++){
        // calling on children to find the correct node if possible
        TreeNode<int>* x = maxSumNode(root->children[i]);
        
        // finding the sum for that node
        int xSum = x->data;
        for (int i=0; i<x->children.size(); i++){
            xSum += x->children[i]->data;
        }
        // updating ans if found the correct node
        if (xSum > sum){
            ans = x;
        }
    }
    return ans;
}