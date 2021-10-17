Node *deleteNode(Node *head, int pos)
{
    // handling for 0th index
    if (head == NULL){
        return head;
    }
	if (pos == 0){
        Node* a = head;
        head = head->next;
        delete a;
        return head;
    }
    Node* temp = head;
    int count = 0;
    // reaching just before pos
    while(temp!= NULL && count < pos-1){
        temp = temp->next;
        count++;
    }
    // reached just before pos
    if (temp != NULL){
        Node* a = temp->next;
        // what if just after pos is null
        if (a == NULL){
            return head;
        }
    	temp->next = a->next;
    	delete a;
    }
    return head;
    
}