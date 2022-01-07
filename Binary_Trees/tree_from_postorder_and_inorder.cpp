BinaryTreeNode<int>* buildTreeHelper(int *in, int *po, int inS, int inE, int poS, int poE){
    if (inS > inE)
        return NULL;
    int rootData = po[poE];
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
    int lPoS = poS;
    int lPoE = lInE - lInS + lPoS;
    int rInS = rootIndex + 1;
    int rInE = inE;
    int rPoS = lPoE + 1;
    int rPoE = poE - 1;
    
    root->left = buildTreeHelper(in, po, lInS, lInE, lPoS, lPoE);
    root->right = buildTreeHelper(in, po, rInS, rInE, rPoS, rPoE);
    // root->left = leftSubTree;
    // root->right = rightSubTree;
    return root;
}

BinaryTreeNode<int>* buildTree(int *postorder, int postLength, int *inorder, int inLength) {
    return buildTreeHelper(inorder, postorder, 0, inLength-1, 0, postLength-1);
}