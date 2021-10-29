Node *midPoint(Node *head)
{
    if (head == NULL){
        return head;
    }
    // slow and fast both pointing to head
    Node* fast = head;
    Node* slow = head;
    while(fast->next!= NULL && fast->next->next!= NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}