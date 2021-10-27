Node *appendLastNToFirst(Node *head, int n)
{
    if (head == NULL || n == 0){
        return head;
    }
    //finding total length
    int length = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        length++;
    }
    
    Node* tail1 = head;
    int firstLen = length - n;
    
    // reaching end of the first part
    for (int i = 0; i<firstLen-1; i++){
        tail1 = tail1->next;
    }
    
    
    Node* newHead = tail1->next;
    // breaking the connection between two parts
    tail1->next = NULL;
    Node* tail2 = newHead;
    // reaching the end of second part
    while(tail2->next != NULL){
        tail2 = tail2->next;
    }
    // building required links
    tail2->next = head;
    head = newHead;
    return head;
    
    
}