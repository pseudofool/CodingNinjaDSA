#include <vector>
using namespace std;

template <typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode<int>*> children;
    TreeNode(T data){
        this->data = data;
    }

    // destructor
    ~TreeNode(){
        for (int i=0; i<children.size(); i++){
            delete root->children[i];
        }
    }
};