Node *reverseLinkedList(Node *head) {
    if (head == NULL || head->next == NULL){
        return head;
    }
    Node *prev = NULL;
    Node *curr = head;

    while(curr != NULL){
        Node *nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}