SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    // create new Node
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    // case handle for 0th index
    if (position == 0){
        newNode->next = llist;
        llist = newNode; 
        return llist;
    }
    int count = 0;
    SinglyLinkedListNode* temp = llist;
    // reaching just before the position index
    while(temp != NULL && count < position-1){
        temp = temp->next;
        count++;
    }
    // joining links
    if (temp != NULL){
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return llist;
}
