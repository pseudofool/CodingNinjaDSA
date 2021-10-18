Node* insertNode(Node *head, int i, int data) {
	// base case
    if (head == NULL){
        return NULL;
    }
    // calculation part
    if (i == 0){
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return head;
    }
    // recursive step
    Node* temp = insertNode(head->next, i-1, data);
    head->next = temp;
    return head;
    
}