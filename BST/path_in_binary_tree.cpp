vector<int>* getRootToNodePath(BinaryTreeNode<int>* root, int data){
    if (root == NULL){
        return NULL;
    }
    if (root->data == data){
        vector<int>* output = new vector<int>();
        output->push_back(data);
        return output;
    }

    vector<int>* leftOutput = getRootToNodePath(root->left,data);
    if (leftOutput != NULL){
        leftOutput->push_back(root->data);
        return leftOutput;
    }

    vector<int>* rightOutput = new vector<int>(root->right, data);
    if (rightOutput != NULL){
        rightOutput->push_back(root->data);
        return rightOutput;
    }else{
        return NULL;
    }
}