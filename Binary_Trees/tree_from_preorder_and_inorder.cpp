BinaryTreeNode<int>* buildTreeHelper(int *pr, int *in, int inS, int inE, int prS, int prE){
    if (inS > inE)
        return NULL;
    int rootData = pr[prS];
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    
    int rootIndex = -1;
    for (int i=inS; i<=inE; i++){
        if (in[i] == rootData){
            rootIndex = i;
            break;
        }
    }
    
    int lInS = inS;
    int lInE = rootIndex - 1;
    int lPrS = prS + 1;
    int lPrE = lInE - lInS + lPrS;
    int rInS = rootIndex + 1;
    int rInE = inE;
    int rPrS = lPrE + 1;
    int rPrE = prE;
    BinaryTreeNode<int>* leftSubTree = buildTreeHelper(pr, in, lInS, lInE, lPrS, lPrE);
    BinaryTreeNode<int>* rightSubTree = buildTreeHelper(pr, in, rInS, rInE, rPrS, rPrE);
    root->left = leftSubTree;
    root->right = rightSubTree;
    return root;
}

BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
    return buildTreeHelper(preorder, inorder, 0, inLength-1, 0, preLength-1);
}