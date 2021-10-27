int findNode(Node *head, int n){
    // Write your code here.
    int index = 0;
    Node* temp = head;
    while(temp != NULL){
        if (temp->data == n){
            return index;
        }
        index++;
        temp = temp->next;
    }
    return -1;
}