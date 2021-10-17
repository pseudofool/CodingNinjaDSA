int length(Node *head) {
    // Write your code here
    if (head == NULL){
        return 0;
    }
    Node* temp = head;
    int smallLen = length(temp->next);
    return 1+smallLen;
    
}