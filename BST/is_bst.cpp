// nlogn approach
#include <climits>
int minimum(BinaryTreeNode<int> *root){
    if (root == NULL){
        return INT_MAX;
    }
    return min(root->data, min(minimum(root->left), minimum(root->right)));
}

int maximum(BinaryTreeNode<int> *root){
    if (root == NULL)
        return INT_MIN;
    return max(root->data, max(maximum(root->left), maximum(root->right)));
}
bool isBST(BinaryTreeNode<int> *root) {
	if (root == NULL){
        return true;
    }
    int leftMax = maximum(root->left);
    int rightMin = minimum(root->right);
    return root->data > leftMax && root->data <= rightMin && isBST(root->left) && isBST(root->right);
}

// O(n) approach
class isBSTReturn{
    public:
    bool isBST;
    int maximum;
    int minimum;
};
isBSTReturn isBSTHelper(BinaryTreeNode<int> *root){
    isBSTReturn output;
    if (root == NULL){
        output.isBST = true;
        output.maximum = INT_MIN;
        output.minimum = INT_MAX;
        return output;
    }
    isBSTReturn leftOutput = isBSTHelper(root->left);
    isBSTReturn rightOutput = isBSTHelper(root->right);
    int maximum = max(root->data, max(leftOutput.maximum, rightOutput.maximum));
    int minimum = min(root->data, min(leftOutput.minimum, rightOutput.minimum));
    bool isBSTFinal = (root->data > leftOutput.maximum) && (root->data <= rightOutput.minimum) && leftOutput.isBST && rightOutput.isBST;
    output.maximum = maximum;
    output.minimum = minimum;
    output.isBST = isBSTFinal;
    return output;
} 
bool isBST(BinaryTreeNode<int> *root){
    isBSTReturn output = isBSTHelper(root);
    return output.isBST;
}