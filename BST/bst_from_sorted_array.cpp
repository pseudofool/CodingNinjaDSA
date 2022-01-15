TODO
/*
dry run si>ei
*/
BinaryTreeNode<int>* constructTreeHelper(int* input, int si, int ei){
    if (si > ei)
        return NULL;
    int midIndex = (si + ei)/2;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(input[midIndex]);
    BinaryTreeNode<int>* leftSubTree = constructTreeHelper(input, si, midIndex-1);
    BinaryTreeNode<int>* rightSubTree = constructTreeHelper(input, midIndex+1, ei);
    root->left = leftSubTree;
    root->right = rightSubTree;
    return root;
}
BinaryTreeNode<int>* constructTree(int *input, int n) {
	return constructTreeHelper(input, 0, n-1);
}