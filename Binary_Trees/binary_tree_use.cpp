#include <iostream>
#include <queue>
#include <vector>
#include "binary_tree_node.h"
using namespace std;

BinaryTreeNode<int>* takeInput(){
    int rootData;
    cout << "Enter data: ";
    cin >> rootData;
    if (rootData == -1){
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int>* leftChild = takeInput();
    BinaryTreeNode<int>* rightChild = takeInput();
    root->left = leftChild;
    root->right = rightChild;
    return root;
}

BinaryTreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout << "Enter root data: ";
    cin >> rootData;
    if (rootData == -1){
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();

        cout << "Enter the left child of " << front->data << endl;
        int leftChildData;
        cin >> leftChildData;
        if (leftChildData != -1){
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChildData);
            front->left = child;
            pendingNodes.push(child);
        }

        cout << "Enter the right child of " << front->data << endl;
        int rightChildData;
        cin >> rightChildData;
        if (rightChildData != -1){
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChildData);
            front->right = child;
            pendingNodes.push(child);
        }
    }
    return root;

}

void printTree(BinaryTreeNode<int>* root){
    if (root == NULL){
        return;
    }
    cout << root->data << ": ";
    if (root->left != NULL){
        cout << "L" << root->left->data << " ";
    }
    if (root->right != NULL){
        cout << "R" << root->right->data;
    }
    cout << endl;
    printTree(root->left);
    printTree(root->right);
}

void printLevelWise(BinaryTreeNode<int> *root) {
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        
        cout << front->data << ":";
        if (front->left != NULL){
            cout << "L:" << front->left->data << ",";
            pendingNodes.push(front->left);
        }else{
            cout << "L:" << -1 << ",";
        }
        if (front->right != NULL){
            cout << "R:" << front->right->data;
            pendingNodes.push(front->right);
        }else{
            cout << "R:" << -1;
        }
        cout << endl;
    }
}

int numNodes(BinaryTreeNode<int>* root){
    if (root == NULL)
        return 0;
    return 1 + numNodes(root->left) + numNodes(root->right);
}

vector<int>* getRootToNodePath(BinaryTreeNode<int>* root, int data){
    if (root == NULL){
        return NULL;
    }
    if (root->data == data){
        vector<int>* output = new vector<int>();
        output->push_back(root->data);
        return output;
    }

    vector<int>* leftOutput = getRootToNodePath(root->left,data);
    if (leftOutput != NULL){
        leftOutput->push_back(root->data);
        return leftOutput;
    }

    vector<int>* rightOutput = getRootToNodePath(root->right, data);
    if (rightOutput != NULL){
        rightOutput->push_back(root->data);
        return rightOutput;
    }else{
        return NULL;
    }
}


int main(){
    /*BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
    BinaryTreeNode<int> *node1 = new BinaryTreeNode<int>(2);
    BinaryTreeNode<int> *node2 = new BinaryTreeNode<int>(3);
    root->left = node1;
    root->right = node2;*/
    BinaryTreeNode<int> *root = takeInputLevelWise();
    // printTree(root);
    vector<int>* output = getRootToNodePath(root, 8);
    // printLevelWise(root);
    for (int i=0; i<output->size(); i++){
        cout << output->at(i) << " ";
    }

    delete root;


    // 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
    return 0;
}