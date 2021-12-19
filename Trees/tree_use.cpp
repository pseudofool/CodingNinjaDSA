#include <iostream>
using namespace std;
#include "tree_node.h"

TreeNode<int>* takeInput(){
    int rootData;
    cout << "Enter data" << endl;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    int n;
    cout << "Enter number of children of " << rootData << endl;
    cin >> n;
    for (int i=0; i<n; i++){
        TreeNode<int>* child = takeInput();
        root->children.push_back(child);
    }
    return root;
}
void printTree(TreeNode<int>* root){
    cout << root->data << ": ";
    for (int i=0; i<root->children.size(); i++){
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for (int i=0; i<root->children.size(); i++){
        printTree(root->children[i]);
    }
}
int main(){
    /*
    TreeNode<int>* root = new TreeNode<int>(1);
    TreeNode<int>* node1 = new TreeNode<int>(2);
    TreeNode<int>* node2 = new TreeNode<int>(3);
    */
    TreeNode<int>* root = takeInput();
    printTree(root);
    


return 0;
}