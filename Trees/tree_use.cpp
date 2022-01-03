#include <iostream>
#include <queue>
using namespace std;
#include "tree_node.h"

TreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout << "Enter root data" << endl;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cout << "Enter the num of child of " << front->data << endl;
        cin >> numChild;
        for (int i = 0; i<numChild; i++){
            int childData;
            cout << "Enter the " << i << "th child of " << front->data << endl;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            pendingNodes.push(child);
            front->children.push_back(child);
        }
    }
    return root;

}


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

void printTreeLevelWise(TreeNode<int>* root){
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout << front->data << ": ";
        for (int i=0; i<front->children.size(); i++){
            pendingNodes.push(front->children[i]);
            cout << front->children[i]->data << ", ";
        }
        cout << endl;
    }
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
    TreeNode<int>* root = takeInputLevelWise();
    printTreeLevelWise(root);
    


return 0;
}