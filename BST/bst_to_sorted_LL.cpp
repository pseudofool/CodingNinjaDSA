// approach 1

Node<int>* constructLinkedList(BinaryTreeNode<int>* root) {

    if (root == NULL){
        return  NULL;
    }
	Node<int>* rNode = new Node<int>(root->data);
    
    Node<int>* lHead = constructLinkedList(root->left);
    Node<int>* rHead = constructLinkedList(root->right);
    
    rNode->next = rHead;
    
    if (lHead != NULL){
    	Node<int>* temp = lHead;
        while(temp->next!= NULL){
            temp = temp->next;
        }
    
    	temp->next = rNode;
        return lHead;
    }
    return rNode;
    
}


// better approach

class base{
    public:
    Node<int> *head;
    Node<int> *tail;
    base(){
        head = NULL;
        tail = NULL;
    }
};
 
base constructLLHelper(BinaryTreeNode<int>* root){
    base output;
    if (root == NULL){
        return output;
    }
    Node<int>* rNode = new Node<int>(root->data);
    
    base leftLL = constructLLHelper(root->left);
    base rightLL = constructLLHelper(root->right);
    
    rNode->next = rightLL.head;
    if (leftLL.tail != NULL)
    	leftLL.tail->next = rNode;
    
    if (leftLL.head != NULL){
    	output.head = leftLL.head;        
    }else{
        output.head = rNode;
    }
    if (rightLL.tail != NULL){
        output.tail = rightLL.tail;
    }else{
        output.tail = rNode;
    }
    // output.tail = rightLL.tail;
    return output;
}