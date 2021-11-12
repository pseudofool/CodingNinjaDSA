Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    //Write your code here
    if(head1 == NULL)
    {
        return head2;
    }
    else if(head2 == NULL)
    {
        return head1;
    }
    Node *fHead = NULL;
    Node *fTail = NULL;
    
    // if one of head is NULL
    if (head1->data < head2->data){
        fHead = head1;
        fTail = head1;
        head1 = head1->next;
    }else{
        fHead = head2;
        fTail = head2;
        head2 = head2->next;
    }
    
    while(head1 != NULL && head2 != NULL){
        // comparing and linking
    	if (head1->data < head2->data){
            fTail->next = head1;
            fTail = head1;
            head1 = head1->next;
        }else{
            fTail->next = head2;
            fTail = head2;
            head2 = head2->next;
        }
    }
    // if one ends
    if (head1 == NULL){
        fTail->next = head2;
    }
    if (head2 == NULL){
        fTail->next = head1;
    }
    return fHead;
}