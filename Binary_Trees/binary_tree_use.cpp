#include <iostream>
#include "binary_tree_node.h"
using namespace std;

void printTree(BinaryTreeNode<int>* root){
    if (root == NULL){
        return;
    }
    cout << root->data;
    printTree(root->left);
    printTree(root->right);
}
int main(){
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
    BinaryTreeNode<int> *node1 = new BinaryTreeNode<int>(2);
    BinaryTreeNode<int> *node2 = new BinaryTreeNode<int>(3);
    root->left = node1;
    root->right = node2;
    printTree(root);
    return 0;
}