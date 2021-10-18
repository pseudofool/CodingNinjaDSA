Node *deleteNodeRec(Node *head, int pos) {
	//Write your code here
    if (head == NULL){
        return NULL;
    }
    
    // calculation part
    if (pos == 0){
        Node* a = head;
        head = head->next;
        delete a;
        return head;
    }
    // recursive part
    Node* temp = deleteNodeRec(head->next, pos-1);
    head->next = temp;
    return head;
    
}