Node *reverseLinkedList(Node *head) {
    if (head == NULL || head->next == NULL){
        return head;
    }
    Node *prev = NULL;
    Node *curr = head;
    Node *nxt = curr->next;
    while(curr != NULL){
        curr->next = prev;
        prev = curr;
        curr = nxt;
        if (nxt!=NULL)
            nxt = curr->next;
    }
    return prev;
}