#include <iostream>
using namespace std;
#include "TreeNode.h"


int main(){
    TreeNode<int> root = int new TreeNode<int>(1);
    TreeNode<int> node1 = int new TreeNode<int>(2);
    TreeNode<int> node2 = int new TreeNode<int>(3);

    root->children.push_back(node1);
    root->children.push_back(node2);
    


return 0;
}